#include<iostream>
int main(){
    // type conversion = convert a data of some data type to another type. Eg, converting an integer value 10 to a float 10.0  
    // implicit = automatic
    // explicit = precede value with new data type(int) 

    int x = 3.14;
    double y = x;
    char ch = 100;//ASCII
    int correct = 8;
    int questions = 10;
    double score =(double) correct/ (double)questions * 100;
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << ch << "\n";
    std::cout << score << "%";
    
    return 0;
}
