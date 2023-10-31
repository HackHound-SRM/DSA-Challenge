import java.util.Scanner;

public class HappyHours {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter time in min: ");
        int min = sc.nextInt();
        hour(min);
    }
    public static void hour(int min){
        int hh = min/60;
        int mm = min%60;
        System.out.println(hh + ":" + mm);
    }
}