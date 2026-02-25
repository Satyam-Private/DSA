import java.util.*;
public class digit_mul{ 
    public static void find_sum(int number){ 
        int mul = 1; 
        int lastDigit; 
        while(number > 0){ 
            lastDigit = number % 10; 

            mul *= lastDigit; 

            number = number / 10; 
        }
        System.out.println("The answer is " + mul);
    }
    public static void main(String args[]){ 
        System.out.println("Enter any number");
        Scanner sc = new Scanner(System.in); 

        int number = sc.nextInt(); 

        find_sum(number); 
    }
}