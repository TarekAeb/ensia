import java.io.IOException;

public class task2_6 {
    public static void main(String[] args) {
        try {
            new ProcessBuilder("shutdown", "-r", "-t", "0").start();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
