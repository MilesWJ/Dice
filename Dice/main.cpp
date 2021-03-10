#include <iostream>
#include <cstdlib>
#include "Dice.h"

int main()
{
	Dice Dice;

	Dice.min = Dice.setup_min();
	Dice.max = Dice.setup_max();
	Dice.count = Dice.setup_count();

	for (int i = 0; i < Dice.count; i++)
	{
		Dice.dice_roll(Dice.min, Dice.max, i + 1);
	}
}