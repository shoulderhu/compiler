package c.sysdep;
import c.exception.IPCException;

public interface Assembler {
    void assemble(String srcPath, String destPath,
            AssemblerOptions opts) throws IPCException;
}
