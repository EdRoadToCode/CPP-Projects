#include <iostream>

int main(){

int number;

do{
    std::cout << "Enter a positive number: ";
    std::cin >> number;
}while (number > 0);

std::cout << "Your Number Is: " << number;

return 0;
}