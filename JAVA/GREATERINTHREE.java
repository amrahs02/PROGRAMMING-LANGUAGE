package com.company;

import java.util.Scanner;

public class GREATERINTHREE {
    public static void main(String[] args) {
//        Write a Program to Find Largest Number Among Three
//        Numbers entered by users
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a>b){
            if (a>c){
                System.out.println(a+" is greatest");
            }
            else {
                System.out.println(c+" is a greatest");
            }
        }
        else {
            if (b>c){
                System.out.println(b+" is greatest");
            }
            else {
                System.out.println(c +" is greatest");
            }
        }
    }
}
