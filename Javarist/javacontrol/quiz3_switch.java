import java.util.Scanner;

public class quiz3_switch {
    public static void main (String args []){
        Scanner sc = new Scanner (System.in);

        System.out.print("The price per pound of Package A: "); double pound_A = sc.nextDouble();
        System.out.print("The percent lean in Package A: "); double lean_A = sc.nextDouble();

        System.out.print("The price per pound of Package B: "); double pound_B = sc.nextDouble();
        System.out.print("The percent lean in Package B: "); double lean_B = sc.nextDouble();
        System.out.println("------------------------------------");

        double value1 = (pound_A/lean_A)*100;
        double value2 = (pound_B/lean_B)*100;

        

       System.out.print("Package A cost per pound of lean: "); System.out.printf("%.2f", value1); System.out.print("\n");
       System.out.print("Package B cost per pound of lean: "); System.out.printf("%.2f", value2); System.out.print("\n");


        int temp = (value1 < value2) ? 1 : 2;
        
        switch(temp){
            case 1:
                System.out.print("\nPackage A has the best value.");
                break;
            case 2:
                System.out.print("\nPackage B has the best value.");
                break;
        }
    }
}
