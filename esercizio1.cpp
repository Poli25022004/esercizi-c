
#include <iostream>

int main() {
    int a, b;  
    std::cout << "Inserisci il primo numero: ";
    std::cin >> a;

    std::cout << "Inserisci il secondo numero: ";
    std::cin >> b;
    if (a > b) {
        std::cout << "Il numero piu grande e: " << a <<std::endl;
    }
    else if (b > a) {
        std::cout << "Il numero piu grande e: " << b <<std::endl;
    }
    else {
        std::cout << "I numeri sono uguali." <<std::endl;
    }

    return 0;
}

