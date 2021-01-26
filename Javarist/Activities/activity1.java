import java.util.Scanner;

public class activity1{
    public static void main (String Args[]){
        int choice;
        double mpg, kpl;

        Scanner sc = new Scanner (System.in);
        System.out.println("1. KPL to MPG");
        System.out.println("2. MPG to KPL");

        System.out.print("Enter your Choice: "); choice = sc.nextInt();
        
        if(choice == 1){
           System.out.print("Enter MPG: "); mpg = sc.nextDouble();
           kpl = (mpg*1.609) / 3.785;
           System.out.print("The converted unit is "); System.out.printf("%.2f", kpl); System.out.print(" KPL");
        }
        else{
            System.out.print("Enter KPL: "); kpl = sc.nextDouble();
            mpg = (kpl / 1.609)*3.785;
            System.out.print("The converted unit is "); System.out.printf("%.2f", mpg); System.out.print(" MPG");
        }

    }
}

