// program to check whether a number is even or not 
// task for you to check each data type 
package chapter1;

import java.util.Scanner;

public class EvenNumber 
{
    public static void main(String[] args) {
        
        long  i;
        int count=0;
        Scanner in = new Scanner(System.in);
        while(true)
        {
        System.out.println("Enter number to check whether even or not");
        i=in.nextLong();
        
        if(i%2l==0)
            System.out.println("No. is even");
        else
            System.out.println("No. is not even");
        count++;
        if(count==10)
            break;
        
       }
    }
    
}
