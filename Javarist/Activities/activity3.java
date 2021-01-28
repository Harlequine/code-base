import java.util.Scanner;
public class activity3 {
    public static void main (String Args[]){
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter Degrees: "); int degrees = sc.nextInt();

        if (degrees>=0 && degrees <=90){
            System.out.println("The angle falls on QUADRANT I");
        }
        else if (degrees>90 && degrees <=180){
            System.out.println("The angle falls on QUADRANT II");
        }
        else if (degrees>=80 && degrees <=270){
            System.out.println("The angle falls on QUADRANT III");
        }
        else if (degrees>270 && degrees <=360){
            System.out.println("The angle falls on QUADRANT IV");
        }
        else{
            System.out.println("Wrong Input");
        }


    }
}
