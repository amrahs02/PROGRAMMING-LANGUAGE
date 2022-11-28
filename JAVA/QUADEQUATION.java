package com.company;

import java.util.Scanner;
import java.lang.*;

public class QUADEQUATION {
    public static void main(String[] args) {
        int a,b,c,D=0;
        double x1,x2,root;
        System.out.println("Enter the numbers from menu");
        System.out.println("The expession is of type");
        System.out.println("ax^2+bx+c");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a");
        a = sc.nextInt();
        System.out.println("Enter b");
        b = sc.nextInt();
        System.out.println("Enter c");
        c = sc.nextInt();
        D = b*b-4*a*c;
        System.out.println("Your discriminant is "+D);
        if (D>0){
            System.out.println("Real and Distinct");
            x1 = (-b+(Math.sqrt(D)))/(2*a);
            x2 = (-b-(Math.sqrt(D)))/(2*a);
            System.out.println("x1 is "+x1);
            System.out.println("x2 is "+x2);
        }else if (D==0){
            System.out.println("Roots are Real and Equal");
            x1= (-b/2*a);
            x2= (-b/2*a);
            System.out.println("x1 is "+x1);
            System.out.println("x2 is "+x2);

        }else if(D<0){
            System.out.println("Roots are complex and distict");
            x1= (-b/2*a);
            x2= (-b/2*a);
            System.out.println("x1 is "+x1);
            System.out.println("x2 is "+x2);

        }
    }
}
