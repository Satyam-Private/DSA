import java.util.ArrayList;
public class arrayList{ 
    public static void main(String args[]){ 
        // System.out.println("hello");
        ArrayList<Integer> list_ints = new ArrayList<>(); 

        list_ints.add(1);
        list_ints.add(2);
        list_ints.add(3);
        list_ints.add(4);
        list_ints.add(5);

        System.out.println(list_ints);

        System.out.println(list_ints.get(2));
        list_ints.set( 2 , 30 );
        System.out.println(list_ints.get(2));
        System.out.println(list_ints.contains(30));
    }
}