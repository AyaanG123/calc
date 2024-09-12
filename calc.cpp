/**
* Name: Ayaan Gill
* Program Name: Calc
* Date: 9/12/24
* Extra: using == and if statements
*/


#include <iostream>

int main()
{
    //declaring variables
    int num1;
    int num2;
    int addans;
    int subans;
    int mulans;
    int divans;
    int incans;
    int incans2;
    int decans;
    int decans2;
    std::string opchoice;
    std::cout << "Enter your first number:" << std::endl;
    std::cin >> num1;

    std::cout << "Enter your second number(for incremention and decremention input 0):" << std::endl;
    std::cin >> num2;

    std::cout << "Enter your operator:" << std::endl;
    std::cin >> opchoice;
//getting user input
    if(opchoice == "+"){
        addans = num1 + num2;
        std::cout << addans << std::endl;
    }

    if(opchoice == "-"){
        subans = num1 - num2;
        std::cout << subans << std::endl;
    }

    if(opchoice == "*"){
        mulans = num1 * num2;
        std::cout << mulans << std::endl;
    }

    if(opchoice == "/"){
        divans = num1 / num2;
        std::cout << divans << std::endl;
    }

    if(opchoice == "increment"){
        incans = num1 + num2;
        incans2 = ++incans;
        std::cout << incans2 << std::endl;
    }

    if(opchoice == "decrement"){
        decans = num1 + num2;
        decans2 = --decans;
        std::cout << decans2 << std::endl;
    }
//checking the operators and printing the answers

}
