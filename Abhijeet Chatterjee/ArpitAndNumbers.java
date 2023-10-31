import java.util.Scanner;
public class ArpitAndNumbers {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = sc.nextInt();
        int sum=0;
        while(n!=0)
        {
            int rem = n%10;
            if(rem>9-rem)
            {
                sum = sum*10 + (9-rem);
            }
            else
                sum = sum*10 + rem;
            n=n/10;
        }

        System.out.println(sum);

        sc.close();
    }
}
