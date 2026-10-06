#include <iostream>
#include <string>

// Homework 6 - Andy Munoz
// CIS 5 Week 06 - Menu

int main() {
	int n = 0;
	do {
		std::cout << "Enter 1-3: ";
		std::cin >> n;

		if (n == 1) {
			std::cout << "Hello User!\n";
		}
		else if (n == 2) {
			int j = 5;
			while (j > 0) {
				std::cout << j << ", ";
				j -= 1;
			}
			std::cout << "\n";
		}
	} while (n != 3);
		std::cout << "The Menu is Closed!\n";
	return 0;
}
