import java.io.IOException;
import java.nio.file.*;

public class task2_5 {
    public static void main(String[] args) {
        String userHome = System.getProperty("user.home");
        Path desktoPath = Paths.get(userHome, "Desktop");
        Path windowDirectory = desktoPath.resolve("windows");

        try {
            Files.createDirectories(windowDirectory);
            System.out.println("Directory created successfully");
        } catch (IOException e) {
            System.err.println("An error occurred while creating the directory");
            e.printStackTrace();
        }
    }

}
