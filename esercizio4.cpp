

#include <iostream>

int inserimento() {
    int n;
    std::cout << "dammi un numero:" << std::endl;
    std::cin >> n;
    return n;
}

int main()
{
    int a, b, c, risultato;

    a = inserimento();
    b = inserimento();
    c = inserimento();

    risultato = (a * b) / c;
    std::cout << risultato << std::endl;

    return 0;
  
}

