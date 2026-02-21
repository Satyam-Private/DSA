
import java.util.Scanner;

public class move_zeros {

    public static void Answer(int arr[]) {
        int zeroIndex = -1;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                zeroIndex = i;
                break;
            }
        }
        if (zeroIndex == -1) {
            System.out.print("There are no zeros");
            return;
        }
        int temp;
        int start = zeroIndex;
        for (int i = start + 1; i < arr.length; i++) {
            if (arr[i] != 0) {
                temp = arr[i];
                arr[i] = 0;
                arr[zeroIndex] = temp;

                zeroIndex++;
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        // System.out.print("hellow world");
        Scanner sc = new Scanner(System.in);
        int arrSize = sc.nextInt();
        int arr[] = new int[arrSize];
        for (int i = 0; i < arrSize; i++) {
            arr[i] = sc.nextInt();
        }
        Answer(arr);
    }
}
