//
//  Name: Ryan Peters
//  File Name: main.cpp
//  Lab #: Lab1
//  Date: 26 Jan 2015
//

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Displaying the string "Hello World" first
    cout << "Hello World! \n";
  
    // Creating variable of type string as name...of user
    string name;
    // Ask user what his/her name is
    cout << "What's your name? ";
    // Using function if user adds space and puts last name also
    getline (cin, name);
    // Displaying the resulting users name and adds hello to it
    cout << "Hello " << name << "!\n";
    return 0;
}
