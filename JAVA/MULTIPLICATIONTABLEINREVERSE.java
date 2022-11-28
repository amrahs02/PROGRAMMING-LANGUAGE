package com.LOOP;

import java.util.Scanner;

public class MULTIPLICATIONTABLEINREVERSE {
    public static void main(String[] args) {
        //Multiplication table of a given number in reverse order
        int i,n;
        System.out.println("Enter your number");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("Your table in reverse order is");
        for (i=10;i>=1;i--){
            System.out.println(num*i);
        }
    }
}
