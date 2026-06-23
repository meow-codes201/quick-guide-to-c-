#include<iostream>
#include<cmath>

int main(){
    double x= 3;
    double y = 4;
    double z = std::max(x,y);
    std::cout << z << "\n";
    double t = std::min(x,y);
    std::cout << t << "\n";
    double power = pow(2,4);
    std::cout << power<<"\n";
    double sq = sqrt(64);
    std::cout << sq << "\n";
    double ab = abs(-100);
    std::cout << ab << "\n";
    double rnd = round(3.14159);
    std::cout << rnd << "\n";
    double rnd2 = round(9.9999);
    std::cout << rnd2 << std::endl;
    double cl = ceil(-8.9999);
    std::cout << cl << std::endl;
    double fl = floor(-8.999999);
    std::cout << fl << std::endl;
    return 0;
}
