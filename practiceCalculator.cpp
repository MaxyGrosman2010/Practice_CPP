#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    double c;

    std::cout << "Enter side X: ";
    std::cin >> x;
    std::cout << '\n' << "Enter side Y: ";
    std::cin >> y;
    c = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << '\n' << "The hypotenuse is: " << c;

    return 0;
}