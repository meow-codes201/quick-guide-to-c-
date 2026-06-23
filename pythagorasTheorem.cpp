#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    double b;
    double c;
    cout << "Enter height: ";
    cin >> a;
    cout << "Enter base: ";
    cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << "Hypotenuse is: " << c << "\n";
    return 0;
}
