package gui;

import compiler.Parser;
import compiler.Scanner;
import compiler.Sym;
import compiler.Symbol;

import javax.swing.*;
import javax.swing.filechooser.FileNameExtensionFilter;
import javax.swing.text.BadLocationException;
import javax.swing.text.DefaultStyledDocument;
import javax.swing.text.Document;
import javax.swing.text.html.HTMLEditorKit;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.InputEvent;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.IOException;

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

    private void save() {

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

        System.out.println(Text.getTextArea(frame.getTFile()).getFont().getSize());

    }


    private void copy() {


    }

    private void paste() {


    }
}




















