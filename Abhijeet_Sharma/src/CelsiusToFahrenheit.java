import java.util.Scanner;
public class CelsiusToFahrenheit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter the value in Celsius: ");
        double Celsius = sc.nextInt();
        double Fahrenheit = (Celsius*9/5)+32;
        System.out.printf("%.2f",Fahrenheit);
    }
}
