#include <iostream>
#include <cmath>



// funkcija za deljenje
double deljenje(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Deljenje z 0!" << std::endl;
        return;
    }
    return num1/num2;
}
// funkcija za kvadratni koren
double kvadratni_koren(double num) {
    return std::sqrt(num);
}
// funkcija za potenciranje
double potenciranje(double num) {
    return num*num;
}
//funkcija za absolutno vrednost
double absolutna_vrednost(double num) {
    if (num < 0) {
        num = num * (-1);
    }
    return num;
}

double procent_od(double procent, double num) {
    double new_procent = procent/100;
    return num * num;
}
//funkcija za izpis izbora
void izpis_izbir() {
    std::cout << "1 -- seštevanje || 2 -- odštevanje || 3 -- množenje || 4 -- deljenje || 5 -- kvadratni koren || 6 -- potenciranje || 7 -- absolutna vrednost || 8 -- procent od || 0 -- EXIT" << std::endl;
}

/*
    Calculator
*/
int main() {
    bool running = true;
    int x;
    while (running) {
        izpis_izbir();
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
            case 4:
                std::cout << "num1: ";
                std::cin >> num1;
                std::cout << "\nnum2: ";
                std::cin >> num2;
                std::cout << deljenje(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "num: ";
                std::cin >> num1;
                std::cout << kvadratni_koren << std::endl;
                break;
            case 6:
                std::cout << "num: ";
                std::cin >> num1;
                std::cout << potenciranje(num1) << std::endl;
                break;
            case 7:
                std::cout << "num: ";
                std::cin >> num1;
                std::cout << absolutna_vrednost(num1) << std::endl;
            case 8:
                std::cout << "procent: ";
                std::cin >> num1;
                std::cout << "\nnum2: ";
                std::cin >> num2;
                std::cout << procent_od(num1, num2) << std::endl;
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


