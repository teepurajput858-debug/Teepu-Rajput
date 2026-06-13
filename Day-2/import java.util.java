import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        
        int product = 1;
        int temp = num;
        
        // Loop to extract and multiply digits
        while (temp > 0) {
            int digit = temp % 10;
            product *= digit;
            temp /= 10;
        }
        
        System.out.println("Product of digits of " + num + " is " + product);
    }
}