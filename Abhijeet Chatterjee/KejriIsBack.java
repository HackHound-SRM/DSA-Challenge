import java.util.Scanner;
public class KejriIsBack
{
    static boolean algorithm(int num)
    {
        int even=0, odd=0;
        while(num>0)
        {
            int rem = num%10;
            if(rem%2==0)
                even += rem;
            else    
                odd += rem;
            num = num/10;
        }
        if(even%4==0 || odd%3==0)
            return true;
        else
            return false;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of cars(N): ");
        int n = sc.nextInt();
        int cars[] = new int[n];
        System.out.println("Enter number of cars on new lines: ");
        for(int i=0; i<n; i++)
        {
            cars[i] = sc.nextInt();
        }
        
        for(int i=0; i<n; i++)
        {
            if(algorithm(cars[i]))
                System.out.println("Yes");
            else
                System.out.println("No");
        }

        sc.close();
    }
}