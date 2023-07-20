#include <iostream>

int main(){

    int rows;
    int colums;
    char synbol;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of colums: ";
    std::cin >> colums;

    std::cout << "Enter the synbol: ";
    std::cin >> synbol;

    for (int i = 1; i <= rows; i++){
        for ( int j  = 1; j <= colums; j++){
            std::cout << synbol;
        }
        std::cout << '\n';
    }
}