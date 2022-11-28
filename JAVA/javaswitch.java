package com.company;

import java.util.Scanner;

public class javaswitch {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int age = sc.nextInt();
        switch (age) {
            case 18:
                System.out.println("You are now adult!");
                break;
            case 20:
                System.out.println("You have to get a job");
                break;
            case 25:
                System.out.println("You have job experiece of five years");
                break;
            case 30:
                System.out.println("You have now job experience of 10 years");
                break;
            case 60:
                System.out.println("Enjoy Your life");
                break;
            default:
                System.out.println("Wrong Choice");
        }
    }
}
