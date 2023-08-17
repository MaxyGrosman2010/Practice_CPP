#include <iostream>
#include <cmath>

int main(){
    char op = 'a';
    double a = 1;
    double b = 2;

    switch(op){
        case '+':
            std::cout << a + b << '\n';
            break;
        case '-':
            std::cout << a - b << '\n';
            break;
        case '*':
            std::cout << a * b << '\n';
            break;
        case '/':
            std::cout << a / b << '\n';
            break;
        default:
            std::cout << "Not a valid operator" << '\n';
            break;
    }
}