package c.entity;
import c.ast.TypeNode;

public class Parameters extends DefinedVariable {
    public Parameters(TypeNode type, String name) {
        super(false, type, name, null);
    }

    public boolean isParameter() {
        return true;
    }

    protected void _dump(c.ast.Dumper d) {
        d.printMember("name", name);
        d.printMember("typeNode", typeNode);
    }
}
