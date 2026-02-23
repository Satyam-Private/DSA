import java.util.*; 

public class binary_dec{ 
    public static void bin_to_dec(String str){ 
        int dec = 0; 
        int power = 0; 
        for(int i = str.length() - 1; i >= 0; i-- ){ 
            int value = str.charAt(i) - '0'; 
            dec = dec + value * (int)Math.pow(2,power); 
            power++; 
        }
        System.out.println(dec);
    }

    public static void dec_to_bin(int num){
        String answer = ""; 
        while(num > 0){ 
            int rem = num % 2; 
            answer = answer + rem; 
            num = num / 2; 
        }

        String finalAns = ""; 
        for(int i = answer.length() - 1; i >= 0; i--){ 
            finalAns = finalAns + answer.charAt(i);
        }
        System.out.println(finalAns);
    }
    public static void main(String args[]){ 
        System.out.println("Enter the binary string: ");
        Scanner sc = new Scanner(System.in); 

        String str = sc.nextLine(); 
        bin_to_dec(str); 
        System.out.println("Enter the decimal number for binary representation: ");
        int num = sc.nextInt(); 

        dec_to_bin(num); 
    }
}