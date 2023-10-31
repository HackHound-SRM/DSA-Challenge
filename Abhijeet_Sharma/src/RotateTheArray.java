import java.util.Arrays;
import java.util.Scanner;

public class RotateTheArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for(int i =0; i<size;i++){
            System.out.println("Enter the element: " + i+1);
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the no of rotation: ");
        int rotation = sc.nextInt();
        String result = Arrays.toString(rotation(rotation, arr));
        System.out.println("The result is: " + result);
    }
    public  static int[] rotation(int rotation, int [] arr){
        while(rotation!=0) {
            int last = arr[0];
            for(int i = 0; i<arr.length-1; i++){
                arr[i] = arr[i+1];
            }
            arr[arr.length-1] = last;
            rotation++;
        }
        return arr;
    }
}
