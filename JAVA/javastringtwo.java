package com.company;

import java.util.Locale;

public class javastringtwo {
    public static void main(String[] args) {
        String name = "Sandeep";
        int lengthOfString = name.length();
        System.out.println(lengthOfString);
        System.out.println(name);
        String up = name.toUpperCase();
        System.out.println(up);
        String lc = name.toLowerCase();
        System.out.println(lc);
        String trimString = "  Sandeep       ";
        System.out.println(trimString);
        String trim2String = trimString.trim();
        System.out.println(trim2String);
        System.out.println(name.substring(3));
        System.out.println(name.substring(2,4));
        System.out.println(name.replace("San", "Pra"));
        System.out.println(name.startsWith("San"));
        System.out.println(name.startsWith("jdsd"));
        System.out.println(name.endsWith("deep"));
        System.out.println(name.endsWith("ess"));
        System.out.println(name.charAt(3));
        System.out.println(name.indexOf("andeep"));
        //if we want to search from (4)
       // System.out.println(name.indexOf("an", 1); //error
     //   System.out.println(name.lastIndexOf("dee",4 ));
        System.out.println(name.equals("Sandeep")); // consider lower and upper cases
        System.out.println(name.equalsIgnoreCase("Sandeep"));
//        Escape sequence /n /t /' /
    }
}
