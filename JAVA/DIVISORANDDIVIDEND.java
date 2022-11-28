package com.company;

import java.util.Scanner;

public class DIVISORANDDIVIDEND {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("First You have to Entered the dividend");
        int divisor = sc.nextInt();
        System.out.println("Now You have to Entered the divisor");
        int dividend = sc.nextInt();
        float quotient = dividend/divisor;
        float remainder = dividend%divisor;
        System.out.println("The quotient is "+ quotient);
        System.out.println("The remainder is "+ remainder);
    }
}
