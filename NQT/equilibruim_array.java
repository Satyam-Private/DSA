import java.util.*; 
public class equilibruim_array{ 
    public static void find_ans(ArrayList<Integer> arr){ 
        ArrayList<Integer> left_sum = new ArrayList<>(arr.size()); 
        ArrayList<Integer> right_sum = new ArrayList<>();
        int ans = -1;
        int totalSum = 0; 
        for(int i = 0; i < arr.size(); i++){ 
            totalSum += arr.get(i); 
        } 

        left_sum.set(arr.size()-1 , totalSum); 

        for(int i = arr.size() - 2; i >= 0; i--){ 
            left_sum.set(i , left_sum.get(i+1) + arr.get(i)); 
        }
        right_sum.add(arr.get(0)); 
        for(int i = 1; i < arr.size(); i++){ 
            right_sum.add(right_sum.get(i-1) + arr.get(i) ); 
        }

        for(int i = 0 ; i < arr.size(); i++){ 
            if(right_sum.get(i) == left_sum.get(i)){ 
                ans = i; 
                break;
            }
        }
        System.out.println(left_sum);
        System.out.println(right_sum);
        if(ans == -1){ 
            System.out.println("There is no such index ");
        }
        else{ 
            System.out.println("The ans is " + ans);
        }


    }
    public static void main(String args[]){ 
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of the array: ");
        int size = sc.nextInt(); 

        ArrayList<Integer> arr = new ArrayList<>(); 
        System.out.println("enter the array elements one by one: ");
        for(int i = 0;  i < size; i++){  
            int element = sc.nextInt(); 
            arr.add(element);  
        }

        find_ans(arr); 

        

    }
}