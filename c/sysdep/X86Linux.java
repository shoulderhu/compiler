package c.sysdep;
import c.utils.ErrorHandler;
import c.type.TypeTable;
import c.asm.Type;

public class X86Linux implements Platform {
    public TypeTable typeTable() {
        return TypeTable.ilp32();
    }

    public CodeGenerator codeGenerator(
            CodeGeneratorOptions opts, ErrorHandler h) {
        return new c.sysdep.x86.CodeGenerator(
                opts, naturalType(), h);
    }

    private Type naturalType() {
        return Type.INT32;
    }

    public Assembler assembler(ErrorHandler h) {
        return new GNUAssembler(h);
    }

    public Linker linker(ErrorHandler h) {
        return new GNULinker(h);
    }
}
