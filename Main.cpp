#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(0));
	int number = std::rand() % 100 + 1;

	int guess;

	do {
		std::cout << "Guess the number between 1-100: ";
		std::cin >> guess;

		if (guess < number) {
			std::cout << "Too low!" << std::endl;
		}
		else if (guess > number) {
			std::cout << "Too high!" << std::endl;
		}
		else {
			std::cout << "You got it! Congrats!" << std::endl;
			return 0;
		}
	} while (guess != number);
}