#include <iostream> //basic stuff
#include <vector>   //Typedef,
#include <cmath> //Math functions

//namespace
namespace first{
    int a = 1;
}
namespace second{
    int b = 2.2;
}
//typedef
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//Replacement for typedef
using text_t = std::string;
int main(){
    // Print
    std::cout << "Hello world";
    std::cout << "";

    //Data Types
    int a = 0;
    double b = 1.1;
    char c = 'A';
    bool d = true;
    bool e = false;

    //Object
    std::string name = "Maximiliano";
    //Constants
    const double F = 3.14;

    //Namespaces
    //using "namespace variable" std; automatic usage of namespace not recommended
    std::cout << a << '\n';
    std::cout << first::a << '\n';
    std::cout << second::b << '\n';

    //Declaring typedef
    //makes complex datatypes more easy to understand and reduces typos
    //using replaces typedef, much better to use. Use it only for clear benefit
    // pairlist_t pairlist;
    text_t surname = "Grosman";

    //Type conversion basic
    double g = 3.14;
    std::cout << g << '\n';
    std::cout << (double)g << " double"<< '\n';

    //User input
    // std::string userName;
    // std::cout<<"Insert your name" << '\n';
    // std::cin >> userName;
    // std::cout<<'\n'<<userName;

    //Some math functions
    double z = std::max(b, F);
    std::cout << z << '\n';
    z = std::min(b, F);
    std::cout << z << '\n';
    z = pow(b, F);
    std::cout << z << '\n';
    z = sqrt(8);
    std::cout << z << '\n';
    z = abs(-2);
    std::cout << z << '\n';
    z = round(F);
    std::cout << z << '\n';
    z = ceil(F);
    std::cout << z << '\n';
    z = floor(F);
    std::cout << z << '\n';

    //If
    int age = 1;
    if(age >= 18) std::cout << "It's above 18" << '\n';
    else if(age <= 0) std::cout << "This age isn't possible" << '\n';
    else std::cout << "It's below 18" << '\n';
    age >= 18 ? std::cout << "It's above 18" << '\n' : age <= 0 ? 
        std::cout << "This age isn't possible" << '\n' : std::cout << "It's below 18" << '\n';
    bool hungry = false;
    hungry ? std::cout << "You are hungry" << '\n' : std::cout << "You are full" << '\n';

    //Switch
    int month = 0;
    switch(month){
        case 1:
            std::cout << "Happy birthday" << '\n';
            break;
        default:
            std::cout << "It isn't your birthday" << '\n';
    }

    //String methods
    std::string newName = "Daniel";
    std::cout << newName.length() << '\n';
    if(newName.empty()) std::cout << "Please enter a name\n";
    else std::cout << "Hello " << newName << '\n';
    newName.append("@gmail.com");
    std::cout << "It contains an email now: " << newName << '\n';


    return 0;
};