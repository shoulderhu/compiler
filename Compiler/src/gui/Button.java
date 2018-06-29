package gui;

import javax.swing.*;
import javax.swing.Action;

public class Button extends JButton {

    public Button(Action a) {

        super((Icon) a.getValue(Action.SMALL_ICON));
        setActionCommand((String) a.getValue(Action.NAME));
        setToolTipText((String) a.getValue(Action.NAME));
        addActionListener(a);
    }
}
