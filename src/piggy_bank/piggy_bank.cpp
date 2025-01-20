#include <iostream>
#include <stdlib.h>

int deposit(int max, double balance)
{
    system("cls");
    if (balance == max)
    {
        std::cout << "Your'e piggy is full!. \n";
        return 0;
    }

    while (true)
    {
        int deposit = 0;

        std::cout << "Deposit Amount: "; std::cin >> deposit;

        if ((deposit + balance) > max)
        {
            std::cout << "Invalid Deposit Amount, Please try again. \n";
        } 
        else 
        {
            std::cout << deposit << " was added to your Piggy Bank. \n";
            return deposit;
            break;
        }
    }
}


int withdraw(double balance)
{
    system("cls"); 

    while (true) 
    {
        int withdraw = 0;

        std::cout << "Withdraw Amount: "; std::cin >> withdraw;

        if ((balance - withdraw) < 0) 
        {
            std::cout << "Invalid Withdraw Amount, Please try again \n";
        } 
        else 
        {
            std::cout << withdraw << " was deducted to your Piggy Bank. \n";
            return withdraw;
            break;
        }
    }
}


void displayPiggyStatus(double balance)
{
    std::cout << "------------------------------ \n";
    std::cout << "Current Balance: " << balance << std::endl;
    std::cout << "------------------------------ \n";
    std::cout << "[1] Withdraw \n[2] Deposit \n[3] Exit \n";
}


int main()
{
    double balance = 0;
    int max = 1000;

    bool exit = false;

    while (!exit)
    {
        system("cls"); 
        int choice = 0;

        displayPiggyStatus(balance);

        std::cout << "Choice: "; std::cin >> choice;

        switch(choice) 
        {
            case 1: balance -= withdraw(balance); break;
            case 2: balance += deposit(max, balance); break;
            case 3: exit = true; continue; break;
            default: std::cout << "Invalid Choice  . . . \n"; continue; break;
        }

        char last_choice;
        std::cout << "Perform Another Transaction? (Y/N): "; std::cin >> last_choice;

        if (last_choice == 'N' || last_choice == 'n') break;
    }
    std::cout << "Goodbye <3";
}