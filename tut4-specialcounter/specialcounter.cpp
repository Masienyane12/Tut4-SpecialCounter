#include <iostream>
#include "SpecialCounter.h"

int main() {
	SpecialCounter c1;
	SpecialCounter c2(20, 10, 1, 2);
	for (int i = 0; i < 260; i++) {
		c1++;
		++c2;
	}
	std::cout << "c1 is:" << c1.getValue() << "  c2 is:" << c2.getValue() << std::endl;
	for (int i = 0; i < 22; i++) {
		c2--;
		--c1;
	}
	std::cout << "c1 is:" << c1.getValue() << "  c2 is:" << c2.getValue() << std::endl;
	system("pause");
	return 0;
}