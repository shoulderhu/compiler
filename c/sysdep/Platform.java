package c.sysdep;
import c.type.TypeTable;
import c.utils.ErrorHandler;

public interface Platform {
    TypeTable typeTable();
    CodeGenerator codeGenerator(CodeGeneratorOptions opts, ErrorHandler h);
    Assembler assembler(ErrorHandler h);
    Linker linker(ErrorHandler h);
}
