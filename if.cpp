#include <iostream>

int main() {
int age;
std::cout << "Enter age: ";
std::cin >> age;
if(age>=18){
    std::cout << "Voting allowed";
}
else if(age < 0){
    std::cout << "You haven't been born yet";
}
else{
    std::cout << "Wait for " << 18-age << " years to vote";
}

    return 0;
}
