#include <iostream>


int main() {
    bool running = true;
    int x;
    while (running) {
        std::cout << "1 -- seštevanje | 2 -- odštevanje | 3 -- množenje | 0 -- EXIT" << std::endl;
        std::cin >> x;
        double num1;
        double num2;
        switch(x) {
            case 1:
                std::cout << "num1: ";
                std::cin >> num1;
                std::cout << "\nnum2: ";
                std::cin >> num2;
                std::cout << num1+num2 << std::endl;
                break;
            case 2:
                std::cout << "num1: ";
                std::cin >> num1;
                std::cout << "\nnum2: ";
                std::cin >> num2;
                std::cout << num1-num2 << std::endl;
                break;
            case 3:
                std::cout << "num1: ";
                std::cin >> num1;
                std::cout << "\nnum2: ";
                std::cin >> num2;
                std::cout << num1*num2 << std::endl;
                break;
            case 0:
                running = false;
                break;
            default:
                std::cout << "NAPAKA" << std::endl;
                break;
        }
    }
    return 0;
}


