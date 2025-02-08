import java.util.Scanner;

public class task2_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter an integer number: ");
        int number = scanner.nextInt();
        int sum = 0, pro = 1;
        while (number != 0) {
            sum = sum + number % 10;
            pro = pro * (number % 10);
            number /= 10;
        }
        if (sum == pro) {
            System.out.println("The number " + number + " is a spy number.");
        } else {
            System.out.println("The number " + number + " is not a spy number.");
        }
        scanner.close();
    }
}
