/* 
Given N cards arranged in a row, each card has an associated score denoted by the cardScore array.
Choose exactly k cards. In each step, a card can be chosen either from the beginning or the end of the row. The score is the sum of the scores of the chosen cards.

Return the maximum score that can be obtained.

Examples:

Input : cardScore = [1, 2, 3, 4, 5, 6] , k = 3

Output : 15

Explanation : Choosing the rightmost cards will maximize your total score. So optimal cards chosen are the rightmost three cards 4, 5, 6.

The score is 4 + 5 + 6 => 15.

Input : cardScore = [5, 4, 1, 8, 7, 1, 3] , k = 3

Output : 12*/
import java.util.*; 
public class find_max{ 
    // greedy, fails at some cases like {1, 100 , 4, 3}
    public static void find_max_sum(ArrayList<Integer> arr , int k){ 
        int start = 0, end = arr.size() - 1; 
        int sum = 0; 

        
        while(start <= end && k > 0){ 
            if(arr.get(start) >= arr.get(end)){ 
            sum = sum + arr.get(start);  
            start++; 
            k--; 
        }
        else{ 
            sum = sum + arr.get(end); 
            end--; 
            k--;
        }
        } 

        System.out.println(sum);
    }

    public static void find_max_enhanced(ArrayList<Integer> arr , int k){ 
        int size = arr.size(); 

        int windowSize = size - k; 

        int totalSum = 0, windowSum = 0; 
        for(int i = 0; i < size; i++){ 
            totalSum += arr.get(i); 
        }

        if(k == size){
    System.out.println(totalSum);
    return;
}
        int tempWindowSum = 0;
        for(int i = 0; i < windowSize; i++){ 
            tempWindowSum += arr.get(i); 
        }

        windowSum = tempWindowSum; 

        int startIndex = 0, endIndex = windowSize; 
        while(endIndex < size){ 
            tempWindowSum = tempWindowSum - arr.get(startIndex) + arr.get(endIndex);
            if(tempWindowSum < windowSum){ 
                windowSum = tempWindowSum; 
            }
            startIndex++; 
            endIndex++; 
        }
        int ans = (int) totalSum - windowSum; 
        System.out.println(ans);


    }
    public static void main(String args[]){ 
            ArrayList<Integer> arr = new ArrayList<>(); 
            Scanner sc = new Scanner(System.in); 

            System.out.println("Enter the size of the array : ");
            int size = sc.nextInt(); 

            for(int i = 0; i < size; i++){ 
                int element = sc.nextInt(); 
                arr.add(element); 
            }

            System.out.println("Enter the value of k");
            int k = sc.nextInt();
            find_max_sum(arr, k); 
            find_max_enhanced(arr, k); 
    }
}