import java.util.Random;
import java.util.Scanner;

public class task2_1 {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        int i = random.nextInt(100);
        int guess = 0;
        int time = 0;
        System.out.println("Guess a number between 1 and 100");
        while (guess != i && time < 10) {
            guess = scanner.nextInt();
            if (guess == i) {
                System.out.println("Congratulations! You guessed the number");
            } else if (guess < i) {
                System.out.println("Your guess is too low");
            } else {
                System.out.println("Your guess is too high");
            }
            time++;
        }
        scanner.close();
    }
}