
#include <iostream>
int somma(int a, int b) {
    return (a * b) + (a * b);
}

int main()
{
    int c;
    c = somma(10, 5);

    std::cout << "Il valore dell operazione  e: " << c <<std::endl;

    return 0;
}
