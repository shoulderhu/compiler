package gui;

import compiler.Parser;
import compiler.Scanner;
import compiler.Sym;
import compiler.Symbol;
import javafx.stage.FileChooser;

import javax.swing.*;
import javax.swing.filechooser.FileNameExtensionFilter;
import javax.swing.text.BadLocationException;
import javax.swing.text.DefaultStyledDocument;
import javax.swing.text.Document;
import javax.swing.text.html.HTMLEditorKit;
import java.awt.*;
import java.awt.datatransfer.Clipboard;
import java.awt.datatransfer.DataFlavor;
import java.awt.datatransfer.StringSelection;
import java.awt.datatransfer.Transferable;
import java.awt.event.ActionEvent;
import java.awt.event.InputEvent;
import java.awt.event.WindowEvent;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;

import static gui.Main.frame;

public class Action extends AbstractAction {

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
        }
    }

    private void newf() {

        JTabbedPane tabbedPane = frame.getTFile();
        tabbedPane.addTab("file" + (tabbedPane.getTabCount() + 1),
                Text.setTextArea(true, ""));
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
                tabbedPane.setSelectedIndex(tabbedPane.getTabCount() - 1);

                stream.close();
            }
            catch (IOException e) {

                e.printStackTrace();
            }
        }
    }

    private void save()  {
    	try {
    		JFileChooser fileChooser = new JFileChooser();
    		fileChooser.setDialogTitle("Specify a file to save");   
    		JTabbedPane tabbedPane = frame.getTFile();
    		JTextArea textArea = Text.getTextArea(tabbedPane);
            
    		int userSelection = fileChooser.showSaveDialog(tabbedPane);
    		 
    		if (userSelection == JFileChooser.APPROVE_OPTION) {
    		    File fileToSave = fileChooser.getSelectedFile();
    		    PrintStream out = new PrintStream(fileToSave);
    		    String Code_content=textArea.getText();
    		    out.print(Code_content);
    		    System.out.println("Save as file: " + fileToSave.getAbsolutePath());
    		    out.close();
    		}
    		
    	}catch(Exception e) {
    		JOptionPane.showMessageDialog(null, e);
    	}
    	
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
    	tabbedPane.remove(selectedindex);
    }

}




















