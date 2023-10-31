import java.util.Scanner;
public class RotateTheArray
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of array: ");
        int n = sc.nextInt();
        System.out.print("Enter number of steps to rotate by: ");
        int k = sc.nextInt();
        int arr[] = new int[n];
        int newarr[] = new int[n];

        for(int i=0; i<n; i++)
        {
            System.out.print("Enter value at index " + (i+1) + ": ");
            arr[i] = sc.nextInt();
        }

        for(int i=0; i<n; i++)
        {
            if((i-k)<0)
                newarr[n+(i-k)] = arr[i];
            else
                newarr[i-k] = arr[i];
        }

        System.out.println("\n\n");
        for(int i=0; i<n; i++)
        {
            System.out.print(newarr[i] + "  ");
        }
        sc.close();
    }
}