import java.util.Scanner;
public class greater_count{ 
    public static void Solution(int arr[]){ 
        int counter = 1;
        int max = arr[0];
        for(int i = 1; i < arr.length; i++){ 
            if(arr[i] > max){ 
                counter++;
                max = arr[i];
            }
        }
        System.out.println(counter);
    }
    public static void main(String args[]){ 
        // System.out.println("Hellwo world");
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();  
        int[] arr = new int[size];
        for(int i =0; i  < size; i++){ 
            arr[i] = scanner.nextInt();
        }
        Solution(arr);
    }
}