#pragma once

class Dice {
public:
	int min;
	int max;
	int count;

	int setup_min();

	int setup_max();

	int setup_count();

	void dice_roll(int min, int max, int times);
};