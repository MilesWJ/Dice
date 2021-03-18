#pragma once
class Dice {
public:
	int min;
	int max;
	int count;

	int setup_min(); // User input for the minimum.

	int setup_max(); // User input for the maximum.

	int setup_count(); // User input for the count.

	void dice_roll(int min, int max, int times); // Rolls the dice.
};