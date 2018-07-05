package c.sysdep;

public interface CodeGenerator {
    AssemblyCode generate(c.ir.IR ir);
}
