import java.util.*; 

public class greats_array{ 
    public static void Answer(ArrayList<Integer> arr){ 
        ArrayList<Integer> ans = new ArrayList<>(); 

        int max = -1; 

        for(int i = 0; i < arr.size(); i++){ 
            if(arr.get(i) > max){ 
                max = arr.get(i); 
                ans.add(arr.get(i)); 
            }
        }

        System.out.println(ans);
    }
    public static void main(String args[]){ 
        System.out.println("Enter the sizse of the array : ");
        Scanner sc = new Scanner(System.in); 

        int size = sc.nextInt(); 

        System.out.println("Enter the array eleents one by one: ");
        ArrayList<Integer> arr = new ArrayList<>(); 
        for(int i = 0; i < size; i++){ 
            int element = sc.nextInt(); 
            arr.add(element); 
        }

        Answer(arr); 
    }
}