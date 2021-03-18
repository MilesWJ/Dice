#include <iostream>
#include "Dice.h"
#include <ctime>

int Dice::setup_min() // User input for the minimum.
{
	int min;
	std::cout << "Enter the minimum value of the die: ";
	std::cin >> min;
	return min;
}

int Dice::setup_max() // User input for the maximum.
{
	int max;
	std::cout << "Enter the maximum value of the die: ";
	std::cin >> max;
	return max;
}

int Dice::setup_count() // User input for the count.
{
	int count;
	std::cout << "Enter the amount of dice you would like to roll: ";
	std::cin >> count;
	return count;
}

void Dice::dice_roll(int min, int max, int times) // Rolls the dice.
{
	srand(time(NULL));
	int roll = rand() % max + min;
	std::cout << "\nRoll " << times << ": " << roll << std::endl;
}