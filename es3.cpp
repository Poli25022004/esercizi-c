//programma che dati 3 numeri li ordina dal piu piccolo al piu grande

#include <iostream>

int main(){
int a = 2;
int b = 4;
int c = 6;
	if ((a < b & b < a & c < a & c) < b) {
		std::cout << " i numeri in ordine crescrente sono: " <<a<<"  "<<b <<"  "<< c << std::endl;
		return 0;
	}
}