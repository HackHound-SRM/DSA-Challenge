import java.util.ArrayList;
import java.util.Scanner;

public class twoSum {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        System.out.println("Enter the vaues: ");
        while(true)
        {
            String n = sc.nextLine();
            if(n.isEmpty())
                break;
            arr.add(Integer.parseInt(n));
        }

        System.out.println("Enter a number: ");
        int n = sc.nextInt();

        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr.get(i)+arr.get(j) == n)
                    System.out.println(i + " " + j);
            }
        }
        sc.close();
    }    
}
