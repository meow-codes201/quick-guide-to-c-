#include<iostream>
using namespace std;

int main(){
    char op;
    double num1;
    double num2;
    double result;
    cout << "********************************************************************"<<"\n";
    cout << "\t\t\t\t\t\tCALCULATOR\t\t\t\n";
    cout << "********************************************************************"<<"\n";
    cout << "\n\n";
    cout << "enter number A:";
    cin >> num1;
    cout << "Enter operator(+,-,*,/,>,<,):";
    cin >> op;
    cout << "enter number B: ";
    cin >> num2;
    
    switch(op){
        case '+':
        result = num1+num2;
        cout << result << "\n";
        break;
        case '-':
        result = num1-num2;
        cout << result << "\n";
        break;
        case '*':
        result = num1*num2;
        cout << result << "\n";
        break;
        case '/':
        result = num1/num2;
        cout << result << "\n";
        break;
        
        case '>':
        result = num1>num2;
        cout << result << "\n";
        break;
        case '<':
        result = num1<num2;
        cout << result << "\n";
        break;
        default:
        cout << "Invalid operator\n";
    }
    
    
    return 0;
}
