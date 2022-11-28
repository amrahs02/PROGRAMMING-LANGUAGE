package com.company;

import java.util.Scanner;

public class stringexcercisetwo {
    public static void main(String[] args) {
        //wap to convert string to lower case
        String name = "Sandeep Kumar Sharma";
        System.out.println(name.toLowerCase());
        //wap to convert spaces to undercase
        System.out.println(name.replace(" ", "_"));
        //wap to fill in a letter template look like this
        //"Dear <|name|>, Thanks a lot! "
        String letter = "Dear <|name|>, Thanks a lot!";
        System.out.println(letter.replace("<|name|>", "Sandeep"));
        //wap to detect double and triple spaces in a string
        String spaces = "This line contains  triple    and double  spaces";
        System.out.println(spaces.indexOf("  "));
        System.out.println(spaces.indexOf("   "));
        System.out.println(spaces.indexOf("    "));
    }
}
