import java.io.*;

public class Main {

    static public void main(String[] args) {

       Runtime runtime = Runtime.getRuntime();

       try {

           Process process = runtime.exec("./c hello.c");
           BufferedReader bufferedReader = new BufferedReader(
                   new InputStreamReader(process.getInputStream()));

           String string;

           while((string = bufferedReader.readLine()) != null ) {

               System.out.println(string);
           }
       }
       catch (IOException e) {

           e.printStackTrace();
       }

       File asm = new File("hello.s");

       try {

           BufferedReader file = new BufferedReader(new FileReader(asm));
           String string;

           while((string = file.readLine()) != null) {

               System.out.println(string);
           }
       }
       catch (IOException e) {

           e.printStackTrace();
       }

        try {

            Process process = runtime.exec("./hello");
            BufferedReader bufferedReader = new BufferedReader(
                    new InputStreamReader(process.getInputStream()));

            String string;

            while((string = bufferedReader.readLine()) != null ) {

                System.out.println(string);
            }
        }
        catch (IOException e) {

            e.printStackTrace();
        }

    }
}
