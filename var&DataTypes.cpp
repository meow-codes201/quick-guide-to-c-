#include<iostream>
using namespace std;
int main(){
    int x; //declaration
    x = 5; //assigned a value
    int y = 25; //declaration and assignment
    int sum = x + y; //perform sum and store in another variable
    int age = 20;
    int year = 2026;
    int days = 7.5; //it is int so it will truncate the decimal point (floating point or numbers after decimal point get removed leaving only the integer part)
    
    //double (numbers including decimal point)
    double gpa = 3.8;
    double price = 100.89;
    double temperature = 25.9;
    //char 
    char grade = 'A';
    char symbol = '&';
    //bool (true or false)
    bool isStudent = true;
    bool isAdult = true;
    bool forSale = false;
    
    //string (objects that represent a sequence of characters/text)
    string name = "meow codes201";
    string day = "Friday";
    string food = "Fish";
    string address = "123 Fake Street";

    //print them
    cout << "Hello " << name<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << sum << endl;
    cout << age << endl;
    cout << year << endl;
    cout << days << endl;
    cout << gpa << endl;
    cout << price << endl;
    cout << temperature << endl;
    cout << grade << endl;
    cout << symbol << endl;
    cout << isStudent << endl;
    cout << isAdult << endl;
    cout << forSale << endl;
    cout << name << endl;
    cout << day << endl;
    cout << food << endl;
    cout << address << endl;
    return 0;
}
