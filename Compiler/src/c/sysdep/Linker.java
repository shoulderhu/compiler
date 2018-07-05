package c.sysdep;
import c.exception.IPCException;
import java.util.List;

public interface Linker {
    void generateExecutable(List<String> args, String destPath,
            LinkerOptions opts) throws IPCException;
    void generateSharedLibrary(List<String> args, String destPath,
            LinkerOptions opts) throws IPCException;
}
