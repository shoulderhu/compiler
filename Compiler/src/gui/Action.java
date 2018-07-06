package gui;

import compiler.Parser;
import compiler.Scanner;
import compiler.Sym;
import compiler.Symbol;

import javax.swing.*;
import javax.swing.filechooser.FileNameExtensionFilter;
import java.awt.*;
import java.awt.datatransfer.Clipboard;
import java.awt.datatransfer.DataFlavor;
import java.awt.datatransfer.StringSelection;
import java.awt.datatransfer.Transferable;
import java.awt.event.ActionEvent;
import java.awt.event.InputEvent;
import java.io.*;

import static gui.src.Main.frame;

public class Action extends AbstractAction {
    private static String Savepath;
    private static String SaveName;
    private static boolean isSave=false;
    public Action(String name, Icon icon, char key) {

        super(name, icon);

        putValue(Action.SHORT_DESCRIPTION, name);

        if(key != ' ') {

            putValue(Action.ACCELERATOR_KEY,
                    KeyStroke.getKeyStroke(key, InputEvent.CTRL_DOWN_MASK));
        }
    }

    public Button getButton() {

        return new Button(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        switch (e.getActionCommand()) {

            case "New":
                newf();
                break;
            case "Open":
                open();
                break;
            case "Save":
                save();
                break;
            case "Cut":
                cut();
                break;
            case "Copy":
                copy();
                break;
            case "Paste":
                paste();
                break;
            case "Scanner":
                scan();
                break;
            case "Parser":
                parse();
                break;
            case "Close":
                close();
                break;
            case "Compile":
                compile(save());
                break;
            case "Assembly":
                assembly();
                break;
            case "Execute":
                execute();
                break;
            case "Tokens":
                tokens(save());
                break;
            case "IR":
                ir(save());
                break;
            case "Compile&Run":
                compile(save());
                assembly();
                execute();
                break;
            case "Hello":


        }
    }
    private void ir(String filepath) {
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            filepath=Savepath+"/"+SaveName;
            Process process = runtime.exec("./src/gui/c_dump_ir "+filepath);
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string="",res=null;

            while((string = bufferedReader.readLine()) != null ) {
                if(string!=null)
                    res+=string+'\n';
                System.out.println(string);
            }
            if(string==null)
                tabbedOut.add("IR", new Tab_textarea.TextDemoPanel(res));
        }
        catch (IOException e) {

            e.printStackTrace();
        }

    }


    private void tokens(String filepath) {
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            filepath=Savepath+"/"+SaveName;
            Process process = runtime.exec("./src/gui/c_dump_tokens "+filepath);
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string,res=null;

            while((string = bufferedReader.readLine()) != null ) {
                res+=string+'\n';
                System.out.println(string);
            }
            if(string==null)
                tabbedOut.add("Tokens", new Tab_textarea.TextDemoPanel(res));
        }
        catch (IOException e) {

            e.printStackTrace();
        }

    }

    private void execute() {
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            String[] name=SaveName.split("\\.");
            String filepath="./"+name[0];
            Runtime runtime = Runtime.getRuntime();
            Process process = runtime.exec(filepath);
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string="",ans="";

            while((string = bufferedReader.readLine()) != null ) {
                if(string!=null)
                    ans=ans+(string+'\n');
                System.out.println(string);
            }
            for (int i = 0; i < tabbedOut.getTabCount(); i++) {
                String tabTitle = tabbedOut.getTitleAt(i);
                if (tabTitle.equals("Result")) {
                    tabbedOut.remove(i);
                    break;
                }
            }
            tabbedOut.addTab("Result", new Tab_textarea.TextDemoPanel(ans));

        }
        catch (IOException e) {

            e.printStackTrace();
        }
    }

    private void assembly() {

        JTabbedPane tabbedOut = frame.getTOut();

        try {
            String[] name=SaveName.split("\\.");
            String  filepath="./"+name[0]+".s";
            File asm = new File(filepath);

            BufferedReader file = new BufferedReader(new FileReader(asm));
            String string,res="";

            while((string = file.readLine()) != null) {
                res+=string+'\n';
                System.out.println(string);
            }
            for (int i = 0; i < tabbedOut.getTabCount(); i++) {
                String tabTitle = tabbedOut.getTitleAt(i);
                if (tabTitle.equals("Assembly")) {
                    tabbedOut.remove(i);
                    break;
                }
            }

            tabbedOut.addTab("Assembly", new Tab_textarea.TextDemoPanel(res));

        }
        catch (IOException e) {

            e.printStackTrace();
        }

    }

    private void compile(String filepath){
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            Process process = runtime.exec("./src/gui/c "+filepath);
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string,res="";

            while((string = bufferedReader.readLine()) != null ) {
                res+=string+'\n';
                System.out.println(string);
            }
            if(res==null){
                res="Success Compile ..";
            }

            for (int i = 0; i < tabbedOut.getTabCount(); i++) {
                String tabTitle = tabbedOut.getTitleAt(i);
                if (tabTitle.equals("Result")) {
                    tabbedOut.remove(i);
                    break;
                }
            }
            tabbedOut.add("Result", new Tab_textarea.TextDemoPanel(res));


        }
        catch (IOException e) {

            e.printStackTrace();
        }

    }

    private void newf() {
        JTabbedPane tabbedPane = frame.getTFile();
        tabbedPane.addTab("file" + (tabbedPane.getTabCount() + 1),
                Text.setTextArea(true, ""));

        Text.getTextArea(tabbedPane).setTabSize(2);
        Font font = Text.getTextArea(tabbedPane).getFont();
        Text.getTextArea(tabbedPane).setFont(new Font(font.getFontName(), font.getStyle(), 24));
    }

    private void open() {

        JFileChooser chooser = new JFileChooser();
        FileNameExtensionFilter filter = new FileNameExtensionFilter("Source files",
                "txt", "c", "cpp");
        chooser.setFileFilter(filter);

        if(chooser.showOpenDialog(null) == JFileChooser.APPROVE_OPTION) {

            try {
                BufferedInputStream stream = new BufferedInputStream(
                        new FileInputStream(chooser.getSelectedFile().getPath()));

                byte b[] = new byte[stream.available()];
                String str = new String(b, 0, stream.read(b));

                JTabbedPane tabbedPane = frame.getTFile();
                tabbedPane.addTab(chooser.getSelectedFile().getName(),
                        Text.setTextArea(true, str));
                Font font = Text.getTextArea(tabbedPane).getFont();
                Text.getTextArea(tabbedPane).setFont(new Font(font.getFontName(), font.getStyle(), 24));
                Text.getTextArea(tabbedPane).setTabSize(2);
                tabbedPane.setSelectedIndex(tabbedPane.getTabCount() - 1);

                stream.close();
            }
            catch (IOException e) {

                e.printStackTrace();
            }
        }
    }

    private String save()  {

    	try {
    		JFileChooser fileChooser = new JFileChooser();
    		fileChooser.setDialogTitle("Specify a file to save");   
    		JTabbedPane tabbedPane = frame.getTFile();
    		JTextArea textArea = Text.getTextArea(tabbedPane);

    		int userSelection = fileChooser.showSaveDialog(tabbedPane);
            File fileToSave = fileChooser.getSelectedFile();

            if (userSelection == JFileChooser.APPROVE_OPTION) {
    		    PrintStream out = new PrintStream(fileToSave);
    		    String Code_content=textArea.getText();
    		    out.print(Code_content);
    		    System.out.println("Save as file: " + fileToSave.getAbsolutePath());
    		    out.close();

    		}
    		Savepath=fileToSave.getParent();
            SaveName=fileToSave.getName();
    		return fileToSave.getPath();
    	}catch(Exception e) {
    		JOptionPane.showMessageDialog(null, e);
    	}
    	return null;
    }

    private void scan() {

        //frame.getTOut().setSelectedIndex(0);
        //JTextArea textArea = Text.getTextArea(frame.getTOut());
        //Document document = new DefaultStyledDocument();

        new Thread(new Runnable() {

            @Override
            public void run() {

                Scanner scanner = new Scanner(Text.getText(frame.getTFile()));
                Symbol symbol = scanner.nextToken();

                while(symbol.getSym() != Sym.EOF) {

                    System.out.println("\t" + symbol.toString());
            /*textArea.append();

            try{
                document.insertString(document.getLength(), "\t" + symbol.toString() + "\n",
                        null);

            }catch (BadLocationException e) {

                e.printStackTrace();
            }

            textArea.setDocument(document);
            */
                    symbol = scanner.nextToken();
                }
            }
        }).start();
    }

    private void parse() {

        new Thread(new Runnable() {

            @Override
            public void run() {

                System.out.println("start");
                Parser parser = new Parser(new Scanner(Text.getText(frame.getTFile())));
                parser.parse();
                System.out.println("done");
            }
        }).start();
    }

    private void cut() {
    	String ret = "";
        Clipboard sysClip = Toolkit.getDefaultToolkit().getSystemClipboard();

        Transferable clipTf = sysClip.getContents(null);

        if (clipTf != null) {

            if (clipTf.isDataFlavorSupported(DataFlavor.stringFlavor)) {
                try {
                    ret = (String) clipTf
                            .getTransferData(DataFlavor.stringFlavor);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        JTabbedPane tabbedPane = frame.getTFile();
    	JTextArea textArea = Text.getTextArea(tabbedPane);
        

    }


    private void copy() {
    	JTabbedPane tabbedPane = frame.getTFile();
    	JTextArea textArea = Text.getTextArea(tabbedPane);
        
    	if (textArea.getSelectedText() != null) { // See if they selected something 
            String s = textArea.getSelectedText();
            Clipboard clip = Toolkit.getDefaultToolkit().getSystemClipboard();
            Transferable tText = new StringSelection(textArea.getText());
            clip.setContents(tText, null);
        }
    	

    }

    private void paste() {


    }
    private  void close(){
    	JTabbedPane tabbedPane = frame.getTFile();
    	int selectedindex=tabbedPane.getSelectedIndex();
    	if(selectedindex!=-1)
    	    tabbedPane.remove(selectedindex);
    }

}





















