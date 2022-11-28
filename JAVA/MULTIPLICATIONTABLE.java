package com.LOOP;

import java.util.Scanner;

public class MULTIPLICATIONTABLE {
    public static void main(String[] args) {
//        //Printing table of a given number
//        System.out.println("Enter the number");
//        Scanner sc = new Scanner( System.in);
//        int num = sc.nextInt();
//        System.out.println("The number is "+num);
//        System.out.println("And the table is :");
//        int i;
//        for (i=1;i<=10;i++){
//            System.out.println(num*i);
//        }
//    }
//}
//Method 2 factorial
        int i = 1, fact = 1;
        System.out.println("Enter the number");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (i <= n) {
            fact *= i;
            i++;
        }
        System.out.println("The factorial is "+fact);
    }
}