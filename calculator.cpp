#include <iostream>
#include <cmath>

int main(){
    
    double num1;
    double num2;
    char op;
    double result;

    std::cout << "Enter Your First Number Please: ";
    std::cin >> num1;

    std::cout << "Enter Your Math Operator (+ , - , / , x): ";
    std::cin >> op;

    std::cout << "Enter Your Scond Number Number Please: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result;
        break;

    case '-':
        result = num1 - num2;
        std::cout << "result: " << result;
        break;

    case '/':
        result = num1 / num2;
        std::cout << "result: " << result;
        break;

    case 'x':
        result = num1 * num2;
        std::cout << "result: " << result;
        break;
    
    default:
        std::cout << "Enter a valid math operator please :)";
        break;
    }
}