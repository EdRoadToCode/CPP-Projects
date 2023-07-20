#include <iostream>
#include <ctime>

int main (){

    srand(time(NULL));

    int firstNumber = rand() % 6 + 1;

    std::cout << "Your number is: " << firstNumber;

    return 0;
}