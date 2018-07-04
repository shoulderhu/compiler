package c.entity;
import c.ast.TypeNode;
import c.type.*;

abstract public class Variable extends Entity {
    public Variable(boolean priv, TypeNode type, String name) {
        super(priv, type, name);
    }
}
