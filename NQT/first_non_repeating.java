import java.util.*; 
public class first_non_repeating{ 
    public static void find_first(String str){
        HashMap<Character, Integer> map = new HashMap<>(); 

        for(int i = 0; i < str.length(); i++){ 
            char ch = str.charAt(i); 
            map.put(ch , map.getOrDefault(ch , 0) + 1); 
        }

        // System.out.println(map);
        int ans = -1; 
        for(int i = 0; i < str.length(); i++){ 
            if(map.get(str.charAt(i)) == 1){ 
                ans = i; 
                break;
            }
        }

        if(ans == -1){ 
            System.out.println("There is no unique character in string");
        }
        else{ 
            System.out.println("The first now repeated character is " + str.charAt(ans));
        }
    }
    public static void main(String args[]){ 
       System.out.println("enter a string: ");
       Scanner sc = new Scanner(System.in); 
       String str = sc.nextLine(); 
       System.out.println(str);
       find_first(str); 
    }
}