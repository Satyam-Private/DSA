import java.util.*;
public class sunday_jack{ 
    public static void answer(String weekDay , int numHolidays){ 
        int distance = 0, counter = 0;
        if(weekDay.equals("MON")){ 
            distance = 6;
        }
        else if(weekDay.equals("TUE")){ 
distance = 5;
        }
        else if(weekDay.equals("WED")){ 
distance = 4;
        }
        else if(weekDay.equals("THU")){ 
distance = 3;
        }
        else if(weekDay.equals("FRI")){ 
distance = 2;
        }
        else if(weekDay.equals("SAT")){ 
distance = 1;
        }else  { 
            counter++;
            counter += (numHolidays)/7; 

            System.out.println("THe number of sundays are : " + counter);
            return; 
        }

        int remDays = numHolidays - distance;
        counter += remDays /7;
        System.out.println("THe number of holidays are : " + counter);
        
    }
    public static void main(String args[]){ 
        System.out.println("Enter the starting day: ");
        Scanner sc = new Scanner(System.in); 

        String weekDay = sc.nextLine(); 

        System.out.println("Enter the number of holidays: ");
        int numHolidays = sc.nextInt(); 

        answer(weekDay , numHolidays); 

    }
}