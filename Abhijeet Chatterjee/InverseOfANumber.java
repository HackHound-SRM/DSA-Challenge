import java.util.Scanner;
public class InverseOfANumber {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String n = sc.next();
        int inverse[] = new int[n.length()];
        for(int i=0; i<n.length(); i++)
        {
            int pos = 5-i;
            int unit = n.charAt(i) - 48;
            inverse[unit-1] = pos;
        }
        int result =0;
        for(int i =n.length()-1; i>=0; i--)
        {
            result = result*10 + inverse[i];
        }
        System.out.println(result);
        sc.close();
    }
}
