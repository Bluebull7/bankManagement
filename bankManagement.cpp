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

};