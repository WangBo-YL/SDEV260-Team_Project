#ifndef BUDGET_H
#define BUDGET_H
#include<string>
#include<iostream>
// for testing purposes
class Budget
{
    private:
    double amount;
    std::string name;
    public:
    Budget(double amount, std::string name);
    double getAmount();
    std::string getName();
    void setAmount(double amount);
    void setName(std::string name);
    void printBudget();
    ~Budget(){};
};

#endif