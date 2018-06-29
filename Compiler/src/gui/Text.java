package gui;

import javax.swing.*;

public class Text {

    public static JScrollPane setTextArea(boolean edit, String text) {

        JTextArea textArea = new JTextArea(10, 10);

        if(edit) { textArea.setEditable(true); }
        else { textArea.setEditable(false); }

        if(!text.equals("")) {

            textArea.append(text);
        }

        return new JScrollPane(textArea,
                ScrollPaneConstants.VERTICAL_SCROLLBAR_AS_NEEDED,
                ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED);
    }

    private static JScrollPane getScrollPane(JTabbedPane tabbedPane) {

        return (JScrollPane)tabbedPane.getComponentAt(tabbedPane.getSelectedIndex());
    }

    public static JTextArea getTextArea(JTabbedPane tabbedPane) {

        return (JTextArea)getScrollPane(tabbedPane).getViewport().getView();
    }

    public static String getText(JTabbedPane tabbedPane) {

        return getTextArea(tabbedPane).getText();
    }
}
