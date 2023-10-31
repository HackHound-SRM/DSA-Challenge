import java.util.*;

import javax.imageio.stream.IIOByteBuffer;

public class DSA_Sheet {
    public static void Problem1(float temp){
        float ftemp=(temp*9/5)+32;
        System.out.println("Temperature in Fahrenheit : "+ftemp+" F");
    }
    public static void Problem2(int num){
        int numold=num;
        int rev=0;
        while(num>0){
            rev=rev*10+num%10;
            num/=10;
        }
        System.out.println("The Reverse of "+numold+" is : "+rev);
    }
    public static void Problem3(int time){

    }
    public static void Problem4(double number){
        double Squareroot=Math.sqrt(number);
        System.out.println("The SquareRoot of "+number+" is : "+Squareroot+" .");
    }
    public static void Problem5Logic(int car){
        if((car%4 ==0) || (car%2!=0 && car%3 == 0)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
    public static void Problem6(int numinv){
        int count=1;
        int inv=0;
        while(numinv>0){
            int temp=numinv%10;
            inv=inv+count*(int)Math.pow(10, temp-1);
            numinv/=10;
            count++;
        }
        System.out.print("The Inverse of Number :"+inv);
    }
    public static void Problem7(int min){
        int hour =min/60;
        int mins=min%60;
        System.out.print("Time is "+hour+":"+mins);
    }

    public static void Problem8Logic(String [] arr, int levels){
        //Binary Search Logic
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
        System.out.println("It will Break at "+result+" Floor .");
    }
    public static void Problem9(int array[],int rot){
        System.out.print("Given Array :");
        for(int i=0;i<array.length;i++){
            System.out.print(array[i]);
        }
        
        int temp[]= new int[array.length];
        int k=0;
        //Store Value of Rotation after index of rotataion 
        for(int i=rot;i<array.length;i++){
            temp[k]=array[i];
            k++;
        }
        // Now Storing Index wali rotated Value afterwards
        for(int i=0;i<rot;i++){
            temp[k]=array[i];
            k++;
        }

        // Now Replacing Array
        for(int i=0;i<rot;i++){
            array[i]=temp[i];
        }
        //Printing Array
        System.out.println();
        System.out.print("After Rotation Array :");
        for(int i=0;i<array.length;i++){
            System.out.print(array[i]);
        }
    }
    public static void Problem10(int numb){
        int num=numb;
        int counter=0;
        int rev=0;
        int rrev=0;
        while(num>0){
            int rem=num%10;
            counter=9-rem;
            if(counter<rem){
                rev=rev*10+counter;
            }
            else if(counter>rem){
                rev=rev*10+rem;
            }
            num/=10;

        }
        while(rev>0){
            rrev=rrev*10+rev%10;
            rev/=10;
        }
        System.out.print("The Number is "+rrev);
    }
    public static void Problem11(){}
    public static void Problem12(int n){
        for(int i=1;i<=n;i++){
            //Spaces
            for(int j=1;j<=(n-i);j++){
                System.out.print(" ");
            }
            //Stars
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void Problem13(int nf){
        int a=0,b=1;
        int c=0;
        for(int i=2;i<=nf;i++){
            c=a+b;
            a=b;
            b=c;
        }
        System.out.print(c);
    }
    public static int Problem14(int numf){
        if(numf>1){
            return numf*Problem14(numf-1);
        }
        else{
            return 1;
        }
    }
    public static void Problem15(int nums[],int target){
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    System.out.print("["+i+","+j+"]");
                }
            }
        }
    }
    public static void Problem16(int numcount,int key){
        int count=0;
        while(numcount>0){
            int temp=numcount%10;
            if(temp==key){
                count++;
            }
            numcount/=10;
        }
        System.out.print("Count of Repeat: "+count);
    }
    public static void Problem17(int numfizz){
        String ans[]= new String[numfizz];
        int k=0;
        for(int i=1;i<=numfizz;i++){
            if(i%15==0){
                ans[k]="FizzBuzz";
            }
            else if(i%3==0){
                ans[k]="Fizz";
            }
            else if(i%5==0){
                ans[k]="Buzz";
            }
            else{
                ans[k]=Integer.toString(i);
            }
            k++;
        }
        for(int i=0;i<ans.length;i++){
            System.out.print(" "+ans[i]);
        }

    }
    public static void Problem18(int arraymax[]){
        int max=Integer.MIN_VALUE;
        for(int i=0;i<arraymax.length;i++){
            if(arraymax[i]>max){
                max=arraymax[i];
            }
        }
        System.out.print("Maximum Number in Array : "+max);
    }
    public static void Problem19(int arraydup[]){
        int arraydupf[]= new int[arraydup.length+1];
        for(int i=0;i<arraydup.length;i++){
            if(arraydupf[arraydup[i]]==0){
                arraydupf[arraydup[i]]+=1;
            }
            else{
                System.out.print(arraydup[i]);
            }
        }
    }
    public static void Problem20(int sortarr[]){
        for(int i=1;i<sortarr.length;i++){
            int key =sortarr[i];
            int j=i-1;

            while(j>=0 && sortarr[j]>key){
                sortarr[j+1]=sortarr[j];
                j--;

            }
            sortarr[j+1]=key;

        }
        for(int i=0;i<sortarr.length;i++){
            System.out.print(sortarr[i]+" ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Problem 1");
        System.out.print("Enter Temperature in Celsius :");
        float temp=sc.nextFloat();
        Problem1(temp);

        System.out.println("Problem 2");
        System.out.print("Enter Number:");
        int num=sc.nextInt();
        Problem2(num);
        
        //Problem3(num);

        System.out.println("Problem 4");   
        System.out.print("Enter Number : ");
        double number =sc.nextDouble();
        Problem4(number);

        System.out.println("Problem 5");
        System.out.print("Enter Number of Cars:");
        int noOfcars = sc.nextInt();
        for(int i=1;i<=noOfcars;i++){
            int carnumber=sc.nextInt();
            int sumofnum=0;
            while(carnumber>0){
                sumofnum+=carnumber%10;
                carnumber/=10;
            }
            Problem5Logic(sumofnum);
        }

        System.out.println("Problem 6");
        System.out.println("Enter Number :");
        int numinv=sc.nextInt();
        Problem6(numinv);

        System.out.println("Problem 7");
        System.out.print("Enter Time in Min:");
        int min=sc.nextInt();
        Problem7(min);

        System.out.println("Problem 8");
        System.out.print("Enter Number of Levels:");
        int levels = sc.nextInt();
        String [] arr = new String[levels];
        for(int i=0;i<levels;i++){
            System.out.print("Will it Break at :"+i+":");
            arr[i] = sc.next();
        }
        Problem8Logic(arr, levels);

        System.out.println("Problem 9");
        //If Required we can take input of Array easily using Loops 
        int array[]={1,2,3,4,5,7,8};
        Problem9(array, 2);

        System.out.println("Problem 10");
        System.out.print("Enter Number :");
        int numb = sc.nextInt();
        Problem10(numb);

        //Problem 11

        System.out.println("Problem 12");
        System.out.println("Pattern");
        Problem12(5);

        System.out.println("Problem 13");
        System.out.println("Fibonacci");
        Problem13(10);

        System.out.println("Problem 14");
        int numf=sc.nextInt();
        System.out.println(Problem14(numf));

        System.out.println("Problem 15");
        int nums[]={2,7,11,15};
        Problem15(nums, 9);

        System.out.println("Problem 16");
        Problem16(134533333, 3);

        System.out.println("Problem 17");
        Problem17(4);

        System.out.println("Problem 18");
        int arraymax[]={1,2,3,4,5,6,8};
        Problem18(arraymax);

        System.out.println("Problem 19");
        int arraydup[]={1,2,3,4,5,6,3};
        Problem19(arraydup);

        System.out.println("Problem 20");
        int sortarr[]={5,0,-1,3,6,9,2,7};
        Problem20(sortarr);

    }
}