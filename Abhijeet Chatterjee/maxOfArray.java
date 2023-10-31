import java.util.Scanner;
import java.util.ArrayList;
public class maxOfArray {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();

        System.out.println("Enter numbers: ");

        while(true)
        {
            String num = sc.nextLine();
            if(num.isEmpty())
                break;
            arr.add(Integer.parseInt(num));
        }

        int max=arr.get(0);
        for(int i=1; i<arr.size(); i++)
        {
            if(arr.get(i)>max)
                max = arr.get(i);
        }
        System.out.println(max);
        sc.close();
    }
}
