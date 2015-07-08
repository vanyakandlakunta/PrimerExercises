//
// It is good
//
//
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 07 July 2015 08:09:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* Define a class to represent a bank account. Data members should include the
 * depositor’s name, the account number (use a string), and the balance. Member func-
 * tions should allow the following:
 * n Creating an object and initializing it.
 * n Displaying the depositor’s name, account number, and balance
 * n Depositing an amount of money given by an argument
 * n Withdrawing an amount of money given by an argument
 * Provide method definitions for the class described and write a short program 
 * that illustrates all the features.
 * */
#include<stdio.h>
#include<iostream>
#include<strings.h>
#include<cstring>

class Account
{
    char name[20];
    char accNo[20];
    double balance;
    public:
        void Init(char[],char[],double);
        void Display();
        void Deposit(double);
        void Withdraw(double);
};

void Account::Init(char initName[],char initAccNo[], double initBalance)
{
    strcpy(name,initName);
    strcpy(accNo,initAccNo);
    balance = initBalance;
}

void Account::Deposit(double amount)
{
    balance = balance + amount;
}

void Account::Withdraw(double amount)
{
    balance = balance - amount;
}

void Account::Display()
{
    printf("Name: %s\n",name);
    printf("Account number: %s\n",accNo);
    std::cout<<"Balance: "<<balance<<std::endl;

}

int main()
{
    double balance,deposit,withdraw;
    Account person1;
    char name[20],accNo[20];

    std::cout<<"Enter name: ";
    std::cin.getline(name,20);
    std::cout<<"Enter Account number: ";
    std::cin.getline(accNo,20);
    std::cout<<"Enter balance: ";
    std::cin>>balance;

    person1.Init(name,accNo,balance);
    person1.Display();

    std::cout<<"Enter money to deposit: ";
    std::cin>>deposit;

    person1.Deposit(deposit);
    person1.Display();

    std::cout<<"Enter money to withdraw: ";
    std::cin>>withdraw;

    person1.Withdraw(withdraw);
    person1.Display();

    return 0;
}
