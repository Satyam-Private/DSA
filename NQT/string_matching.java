import java.util.Scanner;
public class string_matching{
    public static void Solution(String s){
        int counter = 0; 
        for(int i = 0; i < s.length(); i++){ 
            if(s.charAt(i)== '#'){ 
                counter++;
            }
            if(s.charAt(i) == '*'){
                counter--;
            }
        }
        System.out.print(counter);
    }
    public static void main(String args[]){ 
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        Solution(s);
    }
}