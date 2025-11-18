
#include <iostream>
int inserimento() {
    int n;
    std::cout << "inserisci un numero" << std::endl;
    std::cin >> n;
    return n;
}
 void stampa(int a, int b, int c ) {
     std::cout << "il valore di a e: " << a << std::endl;
     std::cout << "il valore di b e: " << b << std::endl;
     std::cout << "il valore di c e: " << c << std::endl;

}
int main()
{
    int a, b, c;
    a = inserimento();
    b = inserimento();
    c = inserimento();
 stampa(a, b, c);
  
    return 0;
}

