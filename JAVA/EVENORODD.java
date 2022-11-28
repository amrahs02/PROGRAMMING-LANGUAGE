package com.company;

import java.util.Scanner;

public class EVENORODD {
    public static void main(String[] args) {
//      This program is used to check whether number is even or odd
        System.out.println("Enter The Number");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (num % 2 == 0) {
            System.out.println("The number is even ");
        } else {
            System.out.println("The number is odd");
        }
    }
}