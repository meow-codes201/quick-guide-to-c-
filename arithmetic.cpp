#include<iostream>

int main(){
    // order of precedence
    // 1. ()
    // 2. * , /
    // 3. +, -
    
    int students = 100;
    //add
    students += 2;
    students = students + 8;
    students++;
    std::cout << students << "\n";
    //subtract
    students -= 2;
    students = students -8;
    students--;
    std::cout << students << "\n";
    //multiplication
    students = students*99;
    students *= 10;
    std::cout << students <<"\n";
    //division
    students = students/99;
    students /=10;
    std::cout << students << "\n";
    //arithmetic expression
    students = 10*4+8/4-2-(2*10); //40+2-2-20 = 20
    std::cout << students << "\n";
    students = 20-10*2+8/2+(10-4); //20-20+4+6 = 10
    std::cout << students << "\n";
    return 0;
}
