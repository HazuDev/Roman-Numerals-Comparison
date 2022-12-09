import java.util.Scanner;

class program {
    static int getValue(String word) {
        switch(word) {
            case "M": return 1000; case "D": return 500; case "C": return 100; case "L": return 50; case "X": return 10; case "V" : return 5; case "I": return 1;
            default: return 0;
        }
    }

    static int transform(String word) {
        String[] arr = word.split("(?!^)");
        int value = 0;

        for(String check : arr) {
            value += getValue(check);
        }

        return value;
    }

    static void check(int n1, int n2) {
        if(n1 < n2) {
            System.out.println("> The second number is greater than the first number");

        } else if(n1 > n2) {
            System.out.println("> The first number is greater than the second number");

        } else {
            System.out.println("> Both numbers are the same");
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("> First number : ");
        String num1 = scan.nextLine();

        System.out.print("> Second number : ");
        String num2 = scan.nextLine();

        int value1 = transform(num1);
        int value2 = transform(num2);

        check(value1, value2);

        scan.close();
    }
}