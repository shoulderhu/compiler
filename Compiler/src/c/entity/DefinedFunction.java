package c.entity;
import c.type.Type;
import c.ast.TypeNode;
import c.ast.BlockNode;
import c.ir.Stmt;
import c.asm.Label;
import c.exception.*;
import java.util.List;

public class DefinedFunction extends Function {
    protected Params params;
    protected BlockNode body;
    protected LocalScope scope;
    protected List<Stmt> ir;

    public DefinedFunction(boolean priv, TypeNode type,
            String name, Params params, BlockNode body) {
        super(priv, type, name);
        this.params = params;
        this.body = body;
    }

    public boolean isDefined() {
        return true;
    }

    public List<Parameters> parameters() {
        return params.parameters();
    }

    public BlockNode body() {
        return body;
    }

    public List<Stmt> ir() {
        return ir;
    }

    public void setIR(List<Stmt> ir) {
        this.ir = ir;
    }

    public void setScope(LocalScope scope) {
        this.scope = scope;
    }

    public LocalScope lvarScope() {
        return body().scope();
    }

    /**
     * Returns function local variables.
     * Does NOT include paramters.
     * Does NOT include static local variables.
     */
    public List<DefinedVariable> localVariables() {
        return scope.allLocalVariables();
    }

    protected void _dump(c.ast.Dumper d) {
        d.printMember("name", name);
        d.printMember("isPrivate", isPrivate);
        d.printMember("params", params);
        d.printMember("body", body);
    }

    public <T> T accept(EntityVisitor<T> visitor) {
        return visitor.visit(this);
    }
}
