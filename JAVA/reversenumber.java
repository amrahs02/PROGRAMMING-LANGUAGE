import java.util.Scanner;
public class reversenumber {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter a number:");
        int num=sc.nextInt();
        //1Using some algorithm 
        int rev = 0;
        while (num!=0){
            rev=rev*10 + num%10; //0*10 
            num = num/10;
        }
        //logic 2 by using buffer strigs method
        //StringBuffer rev;
      //  StringBuffer sb = new String
        //System.out.println("Reverser number is :" + rev);
    }
}
