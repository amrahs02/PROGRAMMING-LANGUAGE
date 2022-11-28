package com.company;

import java.util.Scanner;

public class javaconditionals {
    public static void main(String[] args) {
//        int age = 13;
//        if (age>18) {
//            System.out.println("You can drive!");
//        }
//        else {
//            System.out.println("You cannot drive");
//           }
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if (age>=30){
            System.out.println("You are experienced ");
        }
        else if (age>=25){
            System.out.println("You are semi -experienced");
        }else if (age>=20){
            System.out.println("You are semi-semi-experienced");
        }else if (age>=15){
            System.out.println("You are not  experienced");
        }else if (age>=10){
            System.out.println("You are not able");
        }
        else{
            System.out.println("Wrong choice");
        }
        }
    }
