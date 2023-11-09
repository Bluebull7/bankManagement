#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
using namespace std;

//class

class account

{
    int acno;
    char name[50];
    int deposit;
    char type;

public:
    void create_account(); //function to get data from user
    void show_account() const; // function to show data on screen
    void modify(); //function to add new data
    void dep(int); //function to accept amount and add to balance 
    void draw(int); // function to accept amount and sub from balance
    void report() const; //function to show data in tabular format
    int retacno() const; // function to return account number
    int retdeposit() const; //function to return balance amount
    char rettype() const; //function to return type of account

};

void account::create_account()
{
    cout<<"\nEnter The account No. :";
    cin>>acno;
    cout<<"\n\nEnter The Name of The account Holder : ";
    cin.ignore()   
    cin.getline(name,50);
    cout<<"\nEnter the Type of The account (C/S) :";
    cin>>type;
    type=toupper(type);
    cout<<"\nEnter The Initial amount (>=500 for Saving and >=1000 for current ) : " ;
    cin>>deposit;
    cout<<"\n\n\nAccount Created..";
}
void account::show_account() const

{
    cout<<"\nAccount No. : "<<acno;
}
    

