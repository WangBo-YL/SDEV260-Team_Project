//This is the main entry point for the application
#include "../include/budget.h"
// for testing purposes
int main()
{
    Budget test =  Budget(100, "test");
    std::cout << "Let's get started!" << std::endl;
    test.printBudget();
    std::cin.get();
    return 0;
}