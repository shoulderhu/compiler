package compiler;

public class Symbol {

    private int left, right;
    private String value;
    private Sym sym;

    public Symbol(Sym sym, int left, int right, String value) {

        this.sym = sym;
        this.left = left;
        this.right = right;
        this.value = value;
    }

    public String toString() {

        return String.format("sym = %10s, row = %2d, col = %2d, value = %s", sym.name(),
                left, right, value);
    }

    public Sym getSym() {

        return sym;
    }
}