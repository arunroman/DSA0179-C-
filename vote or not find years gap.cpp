#include <iostream>
int main() 
{
    int age, yearsLeft;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else 
    {
        yearsLeft = 18 - age;
        std::cout << "You are not eligible to vote. You need to wait for " << yearsLeft << " more years." << std::endl;
    }
    return 0;
}