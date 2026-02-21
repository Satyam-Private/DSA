import java.util.Scanner;
public class wheels_problem{ 
 

public static void Solution(int v, int w){
  if(2<=w && ( w % 2 == 0) && v < w ){ 
    int TW = (4*v-w)/2; 
    int FW = (w/2) - v;
    System.out.print(TW + " " + FW);
    
  }
  else{ 
    System.out.print("INVALID INPUT");
  }
}
public static void main(String args[]){ 
  Scanner scanner = new Scanner(System.in);
  int v = scanner.nextInt();
  int w = scanner.nextInt(); 
  Solution(v,w);

}
}