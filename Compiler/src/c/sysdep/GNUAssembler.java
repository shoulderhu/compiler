package c.sysdep;
import c.utils.CommandUtils;
import c.utils.ErrorHandler;
import c.exception.IPCException;
import java.util.List;
import java.util.ArrayList;

class GNUAssembler implements Assembler {
    ErrorHandler errorHandler;

    GNUAssembler(ErrorHandler h) {
        this.errorHandler = h;
    }

    // #@@range/assemble{
    public void assemble(String srcPath, String destPath,
                            AssemblerOptions opts) throws IPCException {
        List<String> cmd = new ArrayList<String>();
        cmd.add("as");
        cmd.addAll(opts.args);
        cmd.add("-o");
        cmd.add(destPath);
        cmd.add(srcPath);
        CommandUtils.invoke(cmd, errorHandler, opts.verbose);
    }
    // #@@}
}
