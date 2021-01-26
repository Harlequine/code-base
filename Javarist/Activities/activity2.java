// Louis Andrei Suba
// BSCS 2A
import java.util.Scanner;
public class activity2 {
    
    public static void main (String Args []){
        Scanner sc = new Scanner (System.in);

        System.out.print("Enter a Year: "); int year = sc.nextInt();

        if(year % 400 == 0){
            System.out.println("The year " + year + " is a leap year" );
        }
        else if(year % 4 == 0){
            System.out.println("The year " + year + " is a leap year" );   
        }
        else if(year % 100 == 0){
            System.out.println("The year " + year + " is a leap year" );   
        }1
        else{
            System.out.println("The year " + year + " is NOT a leap year" ); 
        }
    }
}
