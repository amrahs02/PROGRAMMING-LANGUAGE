package com.LOOP;

public class PRINTINGPATTERN1 {
    public static void main(String[] args) {
        int i, j;
        for (i = 4; i >= 0; i--) {
            for (j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println("*");
        }
    }
}