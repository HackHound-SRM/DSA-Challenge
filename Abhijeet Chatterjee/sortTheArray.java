import java.util.Scanner;
import java.util.ArrayList;
public class sortTheArray {
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

        for(int i=0; i<arr.size(); i++)
        {
            int pos = i;
            int value = arr.get(i);
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr.get(j)<value)
                {
                    pos = j;
                    value = arr.get(j);
                }
                
            }
            int temp = arr.get(i);
            arr.set(pos, temp);
            arr.set(i, value);
        }

        for(int i=0; i<arr.size(); i++)
        {
            System.out.println(arr.get(i));
        }
        sc.close();
    }
}
