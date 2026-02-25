import java.util.*; 
public class sort_zero_to_two{
    public static void ans(ArrayList<Integer> Items){ 
        int count_0 = 0; 
        int count_1 = 0; 
        int count_2 = 0; 

        for(int i = 0; i < Items.size(); i++){ 
            if(Items.get(i) == 0) count_0++;
            else if(Items.get(i) == 1) count_1++; 
            else count_2++; 
        }
        // System.out.println(count_0 + " " +  count_1 + " " +  count_2);

        for(int i = 0; i < Items.size(); i++){ 
            if(count_0 >= 1){ 
                Items.set(i, 0);
                count_0--;
                continue; 
            }
            else if(count_1 >= 1){ 
                Items.set(i , 1); 
                count_1--; 
                continue; 
            }
            else{ 
                Items.set(i , 2); 
                count_2--; 
                continue;
            }
        }
        System.out.println(Items);
    }
     public static void main(String args[]){ 
        System.out.println("Enter the array size: ");
        Scanner sc = new Scanner(System.in);

        int size = sc.nextInt(); 
        ArrayList<Integer> Items = new ArrayList<>(); 
        for(int i = 0; i < size; i++){ 
            int element = sc.nextInt(); 
            Items.add(element);
        }

        ans(Items); 
     }
}