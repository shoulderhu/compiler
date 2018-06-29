package gui;

import javax.swing.*;

public enum Icons {

    WIN("/image/C.png"),
    NEW("/image/new.png"),
    OPEN("/image/open.png"),
    SAVE("/image/save.png"),
    CLOSE("/image/close.png"),
    CUT("/image/cut.png"),
    COPY("/image/copy.png"),
    PASTE("/image/paste.png"),
    TEST("/image/test.png");

    private ImageIcon image;

    Icons(String name) {

        image = new ImageIcon(getClass().getResource(name));
    }

    public ImageIcon getImage() {

        return image;
    }
}
