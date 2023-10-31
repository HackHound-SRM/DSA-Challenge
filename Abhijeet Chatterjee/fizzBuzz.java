import java.util.Scanner;
public class fizzBuzz {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = sc.nextInt();
        String arr[] = new String[n];
        for(int i=0; i<n; i++)
        {
            if((i+1)%3==0 && (i+1)%5==0)
            {
                arr[i] = "FizzBuzz";
            }
            else if((i+1)%3==0)
            {
                arr[i] = "Fizz";
            }
            else if((i+1)%5==0)
            {
                arr[i] = "Buzz";
            }
            else
            {
                arr[i] = (i+1)+"";
            }
        }

        for(int i=0; i<n; i++)
        {
            System.out.println(arr[i]);
        }
        sc.close();
    }
}
