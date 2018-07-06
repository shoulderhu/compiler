package gui;

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
                tokens();
                break;
            case "IR":
                ir();
                break;
            case "Compile&Run":
                if(compile(save())==1){
                    assembly();
                    execute();
                }
                break;
            case "Hello":
                open("../../../src/Example/","HelloWorld.c");
                break;
            case "FOR":
                open("../../../src/Example/","FOR.c");
                break;
            case "DO_WHILE":
                open("../../../src/Example/","DO_WHILE.c");
                break;
            case "SWITH_FUNC":
                open("../../../src/Example/","SWITH_FUNC.c");
                break;

        }
    }
    private void open(String path,String name){
        try {
            BufferedInputStream stream = new BufferedInputStream(
                    new FileInputStream(path+name));

            byte b[] = new byte[stream.available()];
            String str = new String(b, 0, stream.read(b));

            JTabbedPane tabbedPane = frame.getTFile();
            tabbedPane.addTab(name,
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

    private void ir() {
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            String filepath=Savepath+"/"+SaveName;
            Process process = runtime.exec("../../../src/gui/c_dump_ir "+filepath);
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


    private void tokens() {
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();

        try {
            String filepath=Savepath+"/"+SaveName;
            Process process = runtime.exec("../../../src/gui/c_dump_tokens "+filepath);
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string,res=null;

            while((string = bufferedReader.readLine()) != null ) {
                res+=string+'\n';
                System.out.println(string);
            }
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

    private int compile(String filepath){
        Runtime runtime = Runtime.getRuntime();
        JTabbedPane tabbedOut = frame.getTOut();
        int result=0;
        try {
            Process process = runtime.exec("../../../src/gui/c "+filepath);

            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string,res="";

            while((string = bufferedReader.readLine()) != null ) {
                res+=string+'\n';
                System.out.println(string);
            }
            if(string==null && !res.contains("error")){
                res="Success Compile ..";
                result=1;
            }

            for (int i = 0; i < tabbedOut.getTabCount(); i++) {
                String tabTitle = tabbedOut.getTitleAt(i);
                if (tabTitle.equals("Result")) {
                    tabbedOut.remove(i);
                    break;
                }
            }
            tabbedOut.add("Result", new Tab_textarea.TextDemoPanel(res));
            return result;

        }
        catch (IOException e) {

            e.printStackTrace();
        }
        return result;
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




    private  void close(){
    	JTabbedPane tabbedPane = frame.getTFile();
    	int selectedindex=tabbedPane.getSelectedIndex();
    	if(selectedindex!=-1)
    	    tabbedPane.remove(selectedindex);
    }

}





















