// ENSC482 - Problem 6
// Created by Klein Gomes on 2018-05-27.
// Copyright © 2018 Klein Gomes. All rights reserved.
//

// Problem 6 (25) – Write a simple program(in C++) that determines the best response strategies 
// highlighted for the Prisoner’s Dilemma Game in the lecture note(slides 26 - 27).
// Your result should work for any similar payoff matrix.Supply the source code and sample results.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include <tuple>
#include <ctime>
#include <random>

int main()
{
	int jailTime1;
	int snitchOfferTime;
	int guiltyCrimeTime;
	int bothSnitchTime;
	int row1[4], row2[4];

	std::cout << "Enter jail time for first offense: ";
	std::cin >> jailTime1;
	std::cout << std::endl << "Enter jail time if snitch: ";
	std::cin >> snitchOfferTime;
	std::cout << std::endl << "Enter jail time if guilty of second crime: ";
	std::cin >> guiltyCrimeTime;
	std::cout << std::endl << "Enter jail time if both snitch: ";
	std::cin >> bothSnitchTime;

	row1[0] = jailTime1;
	row1[1] = jailTime1;
	row1[2] = guiltyCrimeTime;
	row1[3] = snitchOfferTime;

	row2[0] = guiltyCrimeTime;
	row2[1] = snitchOfferTime;
	row2[2] = bothSnitchTime;
	row2[3] = bothSnitchTime;

	std::cout << "1    |    2" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "-----|   NC     |    C" << std::endl;
	std::cout << "NC   |     -"<< jailTime1 << ",-" << jailTime1 << "|   -" << guiltyCrimeTime << ",-" << snitchOfferTime << std::endl;
	std::cout << " C   |    -"<< guiltyCrimeTime << ",-" << snitchOfferTime << "|   -" << bothSnitchTime << ",-" << bothSnitchTime << std::endl;

	if (row1[0] < row2[0] && row1[2] < row2[2]) {
		std::cout << "Choosing C is best for Prisoner 1";
	}
	else {
		std::cout << "Choosing NC is best for Prisoner 1";
	}

	if (row1[1] < row2[3] && row1[1] < row2[3]) {
		std::cout << "Choosing C is best for Prisoner 2";
	}
	else {
		std::cout << "Choosing NC is best for Prisoner 2";
	}

	std::cout << std::endl << std::endl << "Natural Prediction is (C,C) " << std::endl;
	std::cout << "Best outcome for both players (NC,NC) " << std::endl;

	int wait;
	std::cin >> wait;

    return 0;
}

