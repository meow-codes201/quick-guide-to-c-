#include<iostream>
// cin >> extraction
// cout << insertion 

int main(){

    int age;
    std::cout << "What is your age? ";
    std::cin >> age;
    
    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin >> std::ws,name);
    
    
    std::cout <<"\n" << "Hello "<< name << "\n";
    std::cout << "You are " <<age<<" years old\n";
    return 0;
}
