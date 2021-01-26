import java.util.Scanner;
public class activity4 {
    public static void main (String Args[]){
        Scanner sc = new Scanner (System.in);
        
        double micro = 15, macro = 35.50,shared = 8.50, input;
        System.out.println("1. Micro = 15PHP/KM\n2. Macro = 35.50PHP/KM\n3. Shared = 8.50PHP/KM\n");
        System.out.print("Input Type: "); int type = sc.nextInt();

        if (type==1){
            System.out.println("You Chose MICRO = 15PHP/km");
            System.out.print("Input Distance Traveled: "); input = sc.nextDouble();
            System.out.print("The total fare is: " + input*micro + " PHP");
        }
        else if (type==2){
            System.out.println("You Chose MACRO = 35.5PHP/km");
            System.out.print("Input Distance Traveled: "); input = sc.nextDouble();
            System.out.print("The total fare is: " + input*macro + " PHP");
        }
        else if (type==3){
            System.out.println("You Chose SHARED = 8.5PHP/km");
            System.out.print("Input Distance Traveled: "); input = sc.nextDouble();
            System.out.print("The total fare is: " + input*shared + " PHP");
        }
        else{
            System.out.println("Wrong Input");
        }

    }
}
