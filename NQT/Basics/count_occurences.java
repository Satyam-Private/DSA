import java.util.*;
public class count_occurances{ 
    public static void answer(String str){ 
        HashMap<Character, Integer> map1 = new HashMap<>(); 

        for(int i = 0; i < str.length(); i++){ 
            if(map1.containsKey(str.charAt(i))){ 
                map1.put(str.charAt(i), map1.get(str.charAt(i))+1); 
            }
            else{ 
                map1.put(str.charAt(i), 1);
            }
        }
        System.out.print(map1);

    }
    public static void main(String args[]){ 
        Scanner sc = new Scanner(System.in); 

        System.out.println("Enter the string to count the occurnences: "); 
        String str = sc.nextLine(); 


        // System.out.print(str); 
        answer(str); 
    }
}