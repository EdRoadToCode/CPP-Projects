#include <iostream>

// namespace home{
//     int mood = 0;
// }

// namespace school{
//     int mood = 1;
// }

using text_t = std::string;

int main(){
    
    // int x;
    // x=5;

    // int y;
    // y=92;

    // std::cout << x <<'\n';
    // std::cout << y <<'\n';

    // std::cout << y+x <<'\n';

    // double preco = 10.99;

    // std::cout << preco + x << '\n';


    // char nota = 'A';

    // std::cout << nota;

    // std::string nome = "IkishimazãoBestial";

    // std::cout << "Eae, "<< nome;


    // const double PI      = 3.14159;
    // double radius        = 10;
    // double circumference = 2*PI*radius;

    // std::cout << circumference;

    // int mood = 2;

    // std::cout << school::mood;

    // text_t name = "Euduardo";

    // std::cout << name;

    std::string name;
    int age;

    std::cout << "Tap your name ";
    std::getline(std::cin >> std::ws , name);

    std::cout << "Tap your age";
    std::cin >> age;

    std::cout << "Hello " << name <<  " wasspup bro" << '\n';
    std::cout << "And u r " << age<< " years old !";

    return 0;

}