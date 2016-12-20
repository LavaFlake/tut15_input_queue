#include <iostream>

int main() {
	std::cout << "Give me a country code: ";

	char ch;
	std::cin >> ch;
	std::cout << ch << " has the ASCII code " << static_cast<int>(ch) << std::endl;

	std::cin >> ch;
	std::cout << ch << " has the ASCII code " << static_cast<int>(ch) << std::endl;

	return 0;
}
