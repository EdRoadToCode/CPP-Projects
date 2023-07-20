#include <iostream>
#include <ctime>

int main(){
    
    char decisision;

    std::cout << "*********************************************************** \n";
    std::cout << "You Want Open This Box: # \n";
    std::cout << "Type Y or N to open the box: \n";
    std::cout << "*********************************************************** \n";
    std::cin >> decisision;

    srand(time(0));
    int randNum = rand() % 5 +1;

    if (decisision =='Y' || decisision == 'y')
    {
        switch (randNum)
        {
            case 1:
                std::cout << "You won a free Pepsi";
                break;

            case 2:
                std::cout << "You won a free Lunch";
                break;

            case 3:
                std::cout << "You won a t-shirt";
                break;

            case 4:
                std::cout << "You won a Popcorn";
                break;

            case 5:
                std::cout << "You won a free Coffe";
                break;            
        }
    }

     else if(decisision == 'N'|| decisision =='n'){
        std::cout << "Ok, the box will be add to your inventory :) ";
     }

     else{
        std::cout<< "Please Select a valid option";
     }

     return 0;
}