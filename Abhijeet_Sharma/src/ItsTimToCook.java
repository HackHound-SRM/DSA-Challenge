import java.util.Objects;
import java.util.Scanner;

public class ItsTimToCook {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of levels: ");
        int levels = sc.nextInt();
        String [] arr = new String[levels];
        for(int i=0;i<levels;i++){
            System.out.println("Enter whether it will break in level "+ i + " or not: ");
            arr[i] = sc.next();
        }
        System.out.println(levelOfBuilding(arr,levels));
    }
    public static int levelOfBuilding(String [] arr, int levels){
        int left = 0;
        int right = levels-1;
        int result = -1;
        while(left<= right){
            int mid = left +(right-left)/2;
            if(Objects.equals(arr[mid], "Yes")){
                result = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return result;
    }
}
