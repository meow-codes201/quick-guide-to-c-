#include<iostream>
int main(){
    const double PI = 3.14159;
    const double E = 2.71;
    const double gravity = 9.8;
    // PI = 3.14; causes error: assignment of read-only variable 'PI
    int radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';
    
    return 0;
}
