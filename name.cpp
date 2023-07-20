#include <iostream>

int main()
{
    std::string name;

    // std::cout << "Enter your name: ";
    // std::getline(std::cin, name);

    // if(name.length() > 12){
    //     std::cout << "Your name cant be over 12 characters";
    // }

    // else{
    //     std::cout << "Welcome: " << name;
    // }

    // name.insert(0,"@");
    
    // std::cout << "Welcome: " << name;

    // if(name.empty()){
    //     std::cout << "Please insert your name";
    // }

    // else{
    //     std::cout << "Welcome: " << name;
    // }


    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello" << name;


    return 0;

}