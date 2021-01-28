import java.util.Scanner;
public class elseifstatement {

static void first(){
System.out.println("You Selected the First Option");
}
static void second(){
System.out.println("You Selected the Second Option");
}
static void third(){
System.out.println("You Selected the Third Option");
}
static void fourth(){
System.out.println("You Selected the Fourth Option");
}
static void fifth(){
System.out.println("You Selected the Fifth Option");
}

public static void main (String args []){
Scanner sc = new Scanner (System.in);
System.out.print("Enter Numbers from 1-5: ");
int input = sc.nextInt();
switch(input){
case 1:
first();
break;

case 2:
second();
break;

case 3:
third();
break;

case 4:
fourth();
break;

case 5:
fifth();
break;

             }
        }
    }
