import java.util.Scanner;

public class task2_3 {
    public static void main(String[] args) {
        System.out.println("Enter a sentence:");
        Scanner scanner = new Scanner(System.in);
        String sentence = scanner.nextLine();
        boolean isPalindrome = true;
        for (int i = 0; i < sentence.length() / 2; i++) {
            if (sentence.charAt(i) != sentence.charAt(sentence.length() - 1 - i)) {
                isPalindrome = false;
                break;
            }
        }
        System.out.println(isPalindrome ? "Palindrome" : "Not a palindrome");
        scanner.close();
    }
}
