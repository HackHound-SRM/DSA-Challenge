import java.util.Scanner;

public class KejriIsBack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int noOfIteams = sc.nextInt();
        for (int i =1; i<=noOfIteams; i++){
            int number = sc.nextInt();
            int sum = 0;
            for(int j=0; number!=0; j++){
                sum += number%10;
                number = number/10;
            }
            System.out.println(canRun(sum));
        }
    }
    public static Boolean canRun(int sum){
        if((sum%4 ==0) || (sum%2!=0 && sum%3 == 0)){
            return true;
        }
        return false;
    }
}
