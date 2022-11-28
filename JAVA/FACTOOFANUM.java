package com.LOOP;

import java.util.Scanner;
import java.util.SortedMap;

public class FACTOOFANUM {
    public static void main(String[] args) {
        int facto=1,i;
        System.out.println("Enter the number");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n==0){
            System.out.println("Factorial is 1");
        }
        else {
            for (i=1;i<=n;i++){
                facto=facto*i;
            }
            System.out.println("The factorial of "+n+ " is "+facto);
        }
    }
}
