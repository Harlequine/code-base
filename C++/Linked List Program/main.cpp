#include <iostream>
#include <stack>
#include <time.h> //time decalarion

time_t timeToday = time (NULL);

void request(){

}

void reservation (){

}

void mainscreen(){
   std:: cout << "Welcome to CS Cinema!"<<std::endl;
   std:: cout << "The Current time today is: "; printf("%s", ctime(&timeToday));
}

// main functionz
int main (){
    int choice;

    while (true){
        mainscreen();
        std::cout << "Enter the number of your choice here: "; std::cin>>choice;
    }

    switch (choice){
        case 1:
            std::cout << "[1] Reservation"<<std::endl;
            reservation ();
            break;
        case 2: 
        std::cout<<"[2] View Available Seats and Schedule"<<std::endl;
            request();
            break;
        case 3: 
        std::cout<<"[3] Request for new time slot/position"<<std::endl;
            break;
        case 4:
        std::cout<< "[4] Exit Program";
            return 0;
    }
}