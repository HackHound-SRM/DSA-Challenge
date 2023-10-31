import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class ChangeTimeFormat {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter time in 12 hour format: ");
        System.out.println("Enter time in formar hh:mm AM/PM");
        String time = sc.nextLine();
        SimpleDateFormat inFormat = new SimpleDateFormat("hh:mm a");
        SimpleDateFormat outFormat = new SimpleDateFormat("HHmm 'hrs'");
        Date date = inFormat.parse(time);
        System.out.println(outFormat.format(date));
    }
}
