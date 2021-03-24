#include <iostream>
#include "Dice.h"

int Dice::setup_min() {
	int min;
	std::cout << "Enter the minimum value of the die: ";
	std::cin >> min;
	return min;
}

int Dice::setup_max() {
	int max;
	std::cout << "Enter the maximum value of the die: ";
	std::cin >> max;
	return max;
}

int Dice::setup_count() {
	int count;
	std::cout << "Enter the amount of dice you would like to roll: ";
	std::cin >> count;
	return count;
}

void Dice::dice_roll(int min, int max, int times) {
	srand(time(0));
	int roll = rand() % max + min;
	std::cout << "\nRoll " << times << ": " << roll << std::endl;
}