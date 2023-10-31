import java.util.Scanner;
public class BalancedParanthesis {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string: ");
        String expression = sc.next();
        int p=0,c=0,s=0,flag=0;
        for(int i=0; i<expression.length(); i++)
        {
            switch(expression.charAt(i))
            {
                case '(':
                    p++;
                    break;
                case ')':
                    p--;
                    flag = (p<0)?flag+1:flag;
                    break;
                case '{':
                    c++;
                    break;
                case '}':
                    c--;
                    flag = (c<0)?flag+1:flag;
                    break;
                case '[':
                    s++;
                    break;
                case ']':
                    s--;
                    flag = (s<0)?flag+1:flag;
                    break;
            }
        }
        if(p==0&&c==0&&s==0&&flag==0)
            System.out.println(true);
        else
            System.out.println(false);
        sc.close();
    }
}
