#include <iostream>
#include <stack>
#include <time.h> //time decalarion
#include <conio.h>

time_t timeToday = time(NULL);

void movielist(){ 
    std::cout<< "--------------------------"<<std::endl;
    std::cout<< "\tNOW SHOWING"<<std::endl;
    std::cout<< "--------------------------"<<std::endl;
        std::cout<< "1.) The Rain"<<std::endl;
        std::cout<< "2.) Parasite"<<std::endl;
        std::cout<< "3.) Before Sunrise "<<std::endl;
        std::cout<< "4.) Before Sunrise "<<std::endl;
        std::cout<< "5.) Wall-E "<<std::endl;
}

void request()
{



}

void reservation()
{

}

void mainscreen()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "\t\t\t\t=================================================" << std::endl;
    std::cout << "\t\t\t\t\t     Welcome to CS Cinema!" << std::endl;
    std::cout << "\t\t\t\t=================================================" << std::endl;
    std::cout << "\t\t\t\tThe Current time today is: ";
    printf("%s", ctime(&timeToday));
        std::cout << std::endl;
        std::cout << std::endl;
        //pause after displaying welcome screen
        system("PAUSE");
        system("CLS");
        movielist();
        std::cout << "[1] Reservation" << std::endl;
        std::cout << "[2] View Available Seats and Schedule" << std::endl;
        std::cout << "[3] Request for new time slot/position" << std::endl;
        std::cout << "[4] Exit Program" << std::endl;
}

// main functionz
int main()
{
    int choice;

    while (true)
    {
        mainscreen();
        std::cout << "Enter the number of your choice here: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "[1] Reservation" << std::endl;
            reservation();
            break;
        case 2:
            std::cout << "[2] View Available Seats and Schedule" << std::endl;
            request();
            break;
        case 3:
            std::cout << "[3] Request for new time slot/position" << std::endl;
            break;
        case 4:
            std::cout << "Program Exiting...";
            return 0;
        }
    }
}