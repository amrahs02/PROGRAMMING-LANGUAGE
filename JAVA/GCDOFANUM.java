package com.LOOP;

import java.util.Scanner;

public class GCDOFANUM {
    public static void main(String[] args) {
        // This program is used to find factors of a number not the gcd

        System.out.println("Enter the first number");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int i, j, k, num3, gcd;
        for (i = 1; i <= num1; i++) {
            if (num1 % i == 0) {
                System.out.println(i);
            }
        }
    }
}