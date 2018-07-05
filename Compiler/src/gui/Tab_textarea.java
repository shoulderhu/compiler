package gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class Tab_textarea extends JPanel {
    static class TextDemoPanel extends JPanel{
        private JTextArea textArea;

        public TextDemoPanel(String text){
            textArea = new JTextArea(15, 115);
            textArea.setText(text);
            JScrollPane scrollPane = new JScrollPane(textArea);

            add(scrollPane);
        }

        public JTextArea getTextArea() {
            return textArea;
        }
    }

    static class SetTextAction extends AbstractAction {
        private JTabbedPane tabbedPane;

        public SetTextAction(JTabbedPane tabbedPane){
            super("Set text");
            this.tabbedPane = tabbedPane;
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            String value = JOptionPane.showInputDialog(tabbedPane, "Text", "New text");
            if (value != null){
                TextDemoPanel panel = (TextDemoPanel)tabbedPane.getSelectedComponent();
                if (panel != null)
                    panel.getTextArea().setText(value);
            }
        }
    }


}
