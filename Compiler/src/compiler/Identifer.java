package compiler;

public class Identifer {

    private int attr, level;
    private String name;
    private Sym sym;

    public Identifer(int attr, int level, String name, Sym sym) {

        this.attr = attr;
        this.level = level;
        this.name = name;
        this.sym = sym;
    }

    @Override
    public String toString() {

        return String.format("name = %10s, sym = %10s, attr = %2d, level = %d", name,
                sym, attr, level);
    }
}
