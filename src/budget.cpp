#include"../include/budget.h"

Budget::Budget(double amount, std::string name)
{
    this->amount = amount;
    this->name = name;
}

double Budget::getAmount()
{
    return amount;
}

std::string Budget::getName()
{
    return name;
}

void Budget::setAmount(double amount)
{
    this->amount = amount;
}

void Budget::setName(std::string name)
{
    this->name = name;
}

void Budget::printBudget()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Amount: " << amount << std::endl;
}