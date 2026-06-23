#include<iostream>
namespace first
{
int x = 1;      
}
namespace sec
{
int x = 2;      
}
int main()
{
    int x = 10;
 
    std::cout << x << "\n";
    
    std::cout << first::x << "\n";
    
    std::cout << sec::x << "\n";
    
    return 0;
}
