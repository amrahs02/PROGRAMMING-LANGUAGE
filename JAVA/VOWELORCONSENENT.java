package com.company;

import javax.annotation.processing.SupportedSourceVersion;
import java.util.Scanner;

public class VOWELORCONSENENT {
    public static void main(String[] args) {
        System.out.println("Enter the Alphabet characters ");
        Scanner sc = new Scanner(System.in);
        char ch1 = sc.next().charAt(0);
        if (ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'){
            System.out.println("This is Vowel");
        }
        else {
            System.out.println("This is Consonent ");
        }
    }
}
