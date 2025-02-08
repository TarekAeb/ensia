import java.util.Scanner;

public class task2_2 {
    public static class Student {
        private String name;
        private int age;
        private char grade;

        public Student(String name, int age, char grade) {
            this.name = name;
            this.age = age;
            this.grade = grade;
        }

        public String getName() {
            return name;
        }

        public int getAge() {
            return age;
        }

        public char getGrade() {
            return grade;
        }

        public void setName(String s) {
            name = s;
        }

        public void setAge(int a) {
            age = a;
        }

        public void setGrade(char g) {
            grade = g;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of students:");
        int number = scanner.nextInt();
        scanner.nextLine();

        Student students[] = new Student[number];

        for (int i = 0; i < number; i++) {
            System.out.println("Enter the name of student " + (i + 1) + ":");
            String name = scanner.nextLine();

            System.out.println("Enter the age of student " + (i + 1) + ":");
            int age = scanner.nextInt();
            scanner.nextLine();

            System.out.println("Enter the grade of student " + (i + 1) + ":");
            char grade = scanner.next().charAt(0);
            scanner.nextLine();

            students[i] = new Student(name, age, grade);
        }

        scanner.close();

        System.out.println("\nStudent Details:");
        for (int i = 0; i < students.length; i++) {
            System.out.println("Student " + (i + 1) + ":");
            System.out.println("Name: " + students[i].getName());
            System.out.println("Age: " + students[i].getAge());
            System.out.println("Grade: " + students[i].getGrade());
            System.out.println("------------------");
        }
    }
}
