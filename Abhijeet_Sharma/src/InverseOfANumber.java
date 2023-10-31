import java.util.Scanner;

public class InverseOfANumber {
    Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int originalNo = sc.nextInt();
        System.out.println(reverse(originalNo));
    }
    public static int reverse(int originalNo){
        int reverse = 0;
        while(originalNo!=0){
            reverse += originalNo%10;
            originalNo = originalNo/10;
            reverse = reverse*10;
        }
        return reverse/10;
    }
}
