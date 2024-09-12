#include <iostream>

int main()
{
    int num1;
    int num2;
    int addans;
    int subans;
    int mulans;
    int divans;
    std::string opchoice;
    std::cout << "Enter your first number:" << std::endl;
    std::cin >> num1;

    std::cout << "Enter your second number:" << std::endl;
    std::cin >> num2;

    std::cout << "Enter your operator:" << std::endl;
    std::cin >> opchoice;

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

}
