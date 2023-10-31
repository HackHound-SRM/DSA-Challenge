import java.util.Scanner;
import java.util.ArrayList;
public class findDuplicates {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        System.out.println("Enter the numbers: ");
        while(true)
        {
            String n = sc.nextLine();
            if(n.isEmpty())
                break;
            arr.add(Integer.parseInt(n));
        }
        int repeated=-999;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr.get(i) == arr.get(j))
                    repeated = arr.get(j);
            }
        }
        System.out.println(repeated);
        sc.close();
    }
}
