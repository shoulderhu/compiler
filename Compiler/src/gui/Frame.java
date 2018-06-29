package gui;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.net.URL;
import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

public class Frame extends JFrame implements ActionListener, ChangeListener {
    
    private JMenuBar menuBar;
    private JToolBar toolBar;
    private JTabbedPane tabFile, tabOut;
    private JComboBox<Integer> comboBoxSize;
    private JPanel panel;
    private JMenu menu, menu2;
    private JMenuItem item1[];
    private JTextArea textArea;

    //Constructor
    public Frame() throws HeadlessException {

        this.setIconImage(Icons.WIN.getImage().getImage());
        this.setTitle("C Compiler");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(100, 50, 1280, 720);
        this.setResizable(false);
        this.setLayout(new BorderLayout());

        menuBar = new JMenuBar();
        toolBar = new JToolBar();
        toolBar.setFloatable(false);

        menuFile();
        menuEdit();
        menuTest();
        toolFont();

        this.setJMenuBar(menuBar);
        this.getContentPane().add(toolBar, BorderLayout.PAGE_START);

        tabFile = new JTabbedPane();
        this.getContentPane().add(tabFile, BorderLayout.CENTER);

        tabOut = new JTabbedPane();
        tabOut.addTab("Test", Text.setTextArea(false, ""));
        this.getContentPane().add(tabOut, BorderLayout.SOUTH);

        //JSplitPane splitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, true, tabFile, tabOut);
        //splitPane.setDividerSize(20);
        //splitPane.setDividerLocation(500);
        //splitPane.setOneTouchExpandable(true);

        this.setVisible(true);
    }

    private void menuFile() {

        Action actionNew = new Action("New", Icons.NEW.getImage(), 'N');
        Action actionOpen = new Action("Open", Icons.OPEN.getImage(), 'O');
        Action actionSave = new Action("Save", Icons.SAVE.getImage(), 'S');
        Action actionClose = new Action("Close", Icons.CLOSE.getImage(), 'W');

        JMenu menu = new JMenu("File");
        menu.add(actionNew);
        menu.add(actionOpen);
        menu.add(actionSave);
        menu.add(actionClose);
        menuBar.add(menu);

        toolBar.add(actionNew.getButton());
        toolBar.add(actionOpen.getButton());
        toolBar.add(actionSave.getButton());
        toolBar.add(actionClose.getButton());
        toolBar.addSeparator();
    }

    private void menuEdit() {

        Action actionCut = new Action("Cut", Icons.CUT.getImage(), 'X');
        Action actionCopy = new Action("Copy", Icons.COPY.getImage(), 'C');
        Action actionPaste = new Action("Paste", Icons.PASTE.getImage(), 'V');

        JMenu menu = new JMenu("Edit");
        menu.add(actionCut);
        menu.add(actionCopy);
        menu.add(actionPaste);
        menuBar.add(menu);

        toolBar.add(actionCut.getButton());
        toolBar.add(actionCopy.getButton());
        toolBar.add(actionPaste.getButton());
        toolBar.addSeparator();
    }

    private void menuTest() {

        Action actionErr = new Action("Err", Icons.TEST.getImage(), ' ');
        Action actionSym = new Action("Sym", Icons.TEST.getImage(), ' ');
        Action actionScan = new Action("Scanner", Icons.TEST.getImage(), ' ');
        Action actionParse = new Action("Parser", Icons.TEST.getImage(), ' ');

        JMenu menu = new JMenu("Test");
        menu.add(actionErr);
        menu.add(actionSym);
        menu.add(actionScan);
        menu.add(actionParse);
        menuBar.add(menu);
    }

    private void toolFont() {

        Integer size[] = { 8, 10, 12, 14, 16, 18, 24, 36, 48 };
        comboBoxSize = new JComboBox<>(size);
        comboBoxSize.setEditable(true);

        toolBar.add(comboBoxSize);
        toolBar.addSeparator(new Dimension(1000, 25));

        comboBoxSize.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {

                JTextArea textArea = Text.getTextArea(tabFile);
                Font font = textArea.getFont();

                textArea.setFont(new Font(font.getFontName(), font.getStyle(),
                        (int)((JComboBox) e.getSource()).getEditor().getItem()));
            }
        });
    }

    @Override
    public void stateChanged(ChangeEvent e) {


    }

    @Override
    public void actionPerformed(ActionEvent e) {

        System.out.println(e.getActionCommand());
    }

    public JTabbedPane getTFile() {

        return tabFile;
    }

    public JTabbedPane getTOut() {

        return tabOut;
    }
}
