package c.entity;
import c.type.TypeRef;
import c.type.ParamTypeRefs;
import c.ast.Location;
import java.util.List;
import java.util.ArrayList;

public class Params extends ParamSlots<Parameters>
        implements c.ast.Dumpable {
    public Params(Location loc, List<Parameters> paramDescs) {
        super(loc, paramDescs, false);
    }

    public List<Parameters> parameters() {
        return paramDescriptors;
    }

    public ParamTypeRefs parametersTypeRef() {
        List<TypeRef> typerefs = new ArrayList<TypeRef>();
        for (Parameters param : paramDescriptors) {
            typerefs.add(param.typeNode().typeRef());
        }
        return new ParamTypeRefs(location, typerefs, vararg);
    }

    public boolean equals(Object other) {
        return (other instanceof Params) && equals((Params)other);
    }

    public boolean equals(Params other) {
        return other.vararg == vararg
                && other.paramDescriptors.equals(paramDescriptors);
    }
    
    public void dump(c.ast.Dumper d) {
        d.printNodeList("parameters", parameters());
    }
}
