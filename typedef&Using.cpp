#include<iostream>
#include <vector>
typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text_t;
typedef int wn_t;
using myt = std::string;

int main(){
    pairlist_t pl;
    text_t name = "meow codes201";
    text_t prog = "C++";
    wn_t no_of_momos = 60;
    myt myText = "A quick guide to c++";
    std::cout << name << "\n";
    std::cout << prog << "\n";
    std::cout << no_of_momos << "\n";
    std::cout << myText << "\n";
    return 0;
}
