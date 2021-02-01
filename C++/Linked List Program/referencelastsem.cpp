/*                                      
Logistics Company
Move-ify
BSCS 2A
Suba, Louis Andrei L. 
Pangilinan, Jerico
Gaspar, Mark Jimwell
Sumandal III, Fernando
Intal, Ferwinkle
----------------
Table of Contents: 
Struct: Line 118
Arrays: Line 165
Pointer: Line 211
Queue: Line 50
Stack: Line 127
*/
#include <iostream> //io
#include <stack> //stack
#include <time.h> //time decalarion
#include <conio.h> //system
#include <string> //stringmanip
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //sleep
using namespace std;
/////////declaring system time////////////////
time_t timeToday = time (NULL);
//globalvariables//
string q[100]; //queue array
int ctr; //customer input counter
int status[10]; //status array (for storing order status)
string table [50][50]; //2d array for imput/displaying summary
int rand (); //employee id generator
/******************************************************/
int count_occurrences(int arr[], int n, int x) //for counting completed orders
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}
stack <string> stack1; //stack declaration
//////////////

string deliverArr[10] = {"Suba, Louis Andrei L.","Pangilinan, Jerico","Gaspar, Mark Jimwell","Sumandal III, Fernando","Intal, Ferwinkle","Suba, Louis Andrei L.","Pangilinan, Jerico","Gaspar, Mark Jimwell","Sumandal III, Fernando","Intal, Ferwinkle"};
 // list of available delivery persons (will be used on stack)
// queuing ///////////////////////////////////////////////////////////
class Queue{
	private:
	int front=-1, rear=-1;
	
	public:
	bool ifEmpty(){
	    if (front==-1 && rear ==-1)
	        return true;
	    else
	        return false;
	}
	void enQueue(string input){
	    if (ifEmpty()){
	        ++front;
	            q[front] = input;
	            ++rear;
	    }
	    else{
	            ++rear;
	            q[rear] = input;
	    }
	}
	
	void deQueue(){
	    if (front == rear){
	        front = -1;
	        rear = -1;
	    }
	    else {
	        for (int i =0; i<=rear; i++){
	        q[i] = q[i+1];
	        --rear;
	        }
	    }
	}
	void displayQueue (){
	    if (ifEmpty()){
            system ("cls");
	        cout << "Your Query succesfully dequeued.\n";
            
	    }
	    else {
            system ("cls");
	        cout<< "This is your queue for today: \n";
	        for (int i = 0; i<=rear; i++){
	            cout<< "\t" << i+1<< ": " << q[i] << endl;
	        }
	    }
	}
};
/////////////////////////////// MAIN MENU /////////////////////////////////////////////////////

void entryScreen(){
    system("CLS");
        cout << "\n\n\t\t\t   ====================================================================\n";
        cout << "\t\t\t\t\t\t   WELCOME TO MOVE-IFY!\n";
        cout << "\t\t\t\t   The Date and Time today is: "; printf("%s", ctime(&timeToday)); ///date and time syntax
        cout << "\t\t\t   ====================================================================\n";
        cout <<"\t\t\t\t\t\t1.) Available Staff for today\n"; //mema                                     //create    (enquwu)
        cout << "\t\t\t\t\t\t2.) Create a new Query\n"; //enqueue                             //delete ( dequeue)
        cout << "\t\t\t\t\t\t3.) Overview of Orders\n"; //stack and 2d array (dequeueing)      //summary (enqueue and 2d array)
        cout << "\t\t\t\t\t\t4.) Logistics Summary" <<endl;
        cout << "\t\t\t\t\t\t5.) Dequeue Query" <<endl;        
        cout << "\t\t\t\t\t\t6.) Exit Program" <<endl;                         
        cout << "\t\t\t\t\t===================================\n";
        
}
//////////////////////////////////////////////////////////////////////
struct orderDetails{ //struc for order detaills
   string customerName, address, deliveryType, contactNumber, price;  
}       orderArr[50]; //turning struct into an aray

void detailsEntry (Queue *q){ /////////////////////////////////for inputting new queries///////////////////////
//pointerdeclaration
    system ("CLS");

    for (int i=0; i<10; i++){
        stack1.push(deliverArr[i]);
        ////////////
    }

    for (int i =0; i < ctr; i++){
        cout<< "------------------------"<< endl;
        cout <<"Customer Number "<< i+1<<": "<< endl;
        cout<< "The assigned staff for this order is: \n"<< stack1.top()<<endl;
        cout<< "Employee number: "<< rand()<<endl;
        cout<< "------------------------\n"<< endl;
        stack1.pop();

        cout<<"\tInput Customer Contact Number: "; getline(cin, orderArr[i].contactNumber);
        table[i][0] = orderArr[i].contactNumber;

        cout<<"\tEnter the price: "; cin>>orderArr[i].price;
        table[i][1] = orderArr[i].price;
        cin.ignore();
        
        cout<<"\tInput Customer Name: "; getline(cin, orderArr[i].customerName);
        (*q).enQueue(orderArr[i].customerName);
        table[i][3] = orderArr[i].customerName;

        cout<<"\tDelivery Type: (COD, Card, Bank Transfer...)"; getline(cin, orderArr[i].deliveryType);
        table[i][2] = orderArr[i].deliveryType;

        cout<<"\tEnter Customer Address: "; getline(cin, orderArr[i].address);
        table[i][4] = orderArr[i].address;
        cout <<endl;
    }

        system("pause");
}

void summary(){
    system ("CLS");

        cout << "CONTACT NUMBER\tPRICE\tDELIVERY TYPE\tCUSTOMER NAME\tADDRESS\n";
        for (int i = 0; i < 5; i++){
            for(int j = 0; j < 5; ++j){
                cout<< table[i][j] << "\t";
        }
                cout << endl;
    }
        cout << "----------------------------------------------"<<endl;
        cout << "1 = COMPLETED\n2 = NO RESPONSE\n3 = FAILED"<<endl;
        cout << "----------------------------------------------"<<endl;
        for (int i =0; i<ctr; i++){
        cout<<"Enter Status (numbers only) for " << orderArr[i].customerName << ": "; cin >> status[i];
    }
    system("pause");
}
void staff(){
    system ("CLS");
        cout << "\t\t\t\t  -- Here is the registered delivery staff available for today:  --"<<endl<<endl;

	for (int i =0; i<5; i++){
    	cout <<"\t\t\t\t\t\t\t"<< i+1 <<".) " << deliverArr[i]<<endl;
    }
        cout << "\t\t\t\t\t\t--------------------------------------"<<endl;
        cout<< "\t\t\t\tThe company's basis for deployment is strictly Last in and First Out.\n\t\t\t\tProceed to Data entry to display the assigned staff for the order.--\n"<<endl;
        
    system ("pause");  

}
void customerList(Queue *q){
    
            system ("cls");
            
	int n = sizeof(status)/sizeof(status[0]);
    cout << "\t\t\t\tAs of "; printf("%s", ctime(&timeToday)); cout <<"\t\t\t\t---------------------------"<<endl; cout<<endl;
    (*q).displayQueue();
    cout << "---------------------------"<<endl;
    int x = 1;
    int y = 2;
    int z = 3;
    
    cout << "Here is the status of your deliveries: "<<endl;
    cout << "\tCompleted = " << count_occurrences(status, n, x)<<endl;
    cout << "\tNo Response = " << count_occurrences(status, n, y)<<endl;
    cout << "\tFailed = " << count_occurrences(status, n, z)<<endl;
    system ("pause");
    
}
void deQ(Queue *q){
        while (!(*q).ifEmpty()){
        (*q).deQueue();
    }
    system ("pause");
}
////////////////////////////////////// MAIN FUNCTION /////////////////////////////////////////////////////////////////////
int main (){
   
    Sleep(1000); //1 sec interval
    cout<< "System is loading...";
    Sleep(5000); //5000 milliseconds
    system("cls");
	Queue queue;
	Queue *ptrQueue = &queue;
    int choice; 
    while(true){
            entryScreen();
            cout << "\t\t\t\tEnter Number of Choice here: "; cin >> choice;
            cout <<endl;
            

            //switchcase
    switch (choice){
        case 1:
        staff();
            break;
        case 2:
            cout <<"Enter Number of Customers: "; cin >> ctr;
            cin.ignore();
            detailsEntry(ptrQueue);
            break;
        case 3: 
            summary();
            break;
        case 4:
            customerList(ptrQueue);
            break;
        case 5:
        deQ(ptrQueue);
        cout <<  "Your Query DeQueued Succesfully\nreturn to LOGISTICS SUMMARY to check."<<endl;
        cout <<"--------------------\n"; 
    
        break;

        case 6:
            cout << "Thank you for choosing MOVE-IFY!"<<endl;
            cout <<"Program Exiting..."<<endl;
            Sleep (3000);
       
        Sleep (2000);
            return 0;
        default:
         entryScreen();
        }
    }
}