#include <iostream>

int main(){
    double temp;
    char unit = 'F';

    std::cout << "Temperature convertor beginning" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "Enter the valid unit to convert: ";
    //std::cin >> unit; if my terminal ever works -_-

    if(unit == 'F' || unit == 'f'){
        std::cout << "\nInsert the temperature to convert: ";
        //stdcin >> temp;
        temp = 0;
        std::cout << "\nThe temperature is " << (1.8 * temp) + 32 << "°F\n";
    }else if(unit == 'C' || unit == 'c'){
        std::cout << "\nInsert the temperature to convert: ";
        //stdcin >> temp;
        temp = 0;
        std::cout << "\nThe temperature is " << (temp - 32) / 1.8 << "°F\n";
    }else std::cout << "That isn't a valid unit" << '\n';
    std::cout << "End of convertor"; 
}