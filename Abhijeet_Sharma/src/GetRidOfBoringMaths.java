//We will find Square root
import java.util.Scanner;
public class GetRidOfBoringMaths {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number: ");
        int squareRoot = sc.nextInt();
        System.out.println(SquareRoot(squareRoot));
    }
    public static double SquareRoot(int N){
        return Math.sqrt(N);
    }
}