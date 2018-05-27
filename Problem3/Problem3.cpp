// ENSC482 - Problem 2
// Created by Klein Gomes on 2018-05-27.
// Copyright © 2018 Klein Gomes. All rights reserved.
//
// Problem 3 (50) 
// Write a program which determines which act(s) should be chosen in the decision problem below according to each of the following decision rule : 
// (a) The maximin rule; 
// (b) maximax; 
// (c) minimax regret; 
// (d) the optimism - pessimism rule(for alph > .25) 
// (e) the principle of insufficient reason.
// The 4 by 4 decision matrix is defined by the following row vectors corresponding to each of the acts: 
// a1=(20, 20, 0, 10); 
// a2=(10, 10, 10, 10); 
// a3=(0, 40, 0, 0); 
// a4=(10, 30, 0, 0). 
// For each of the decision rules, supply the commented source code (with instructions on how to link and compile) and sample results.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

int a1[4] = { 20,20,0,10 };
int a2[4] = { 10,10,10,10 };
int a3[4] = { 0,40,0,0 };
int a4[4] = { 10,30,0,10 };

void printArray(int arr[4]) {
	for (int i = 0; i < 4; i ++)
	{
		if (arr[i] < 10)
		{
			std::cout << " ";
		}
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "a1: ";
	printArray(a1);
	
	std::cout << "a2: ";
	printArray(a2);

	std::cout << "a3: ";
	printArray(a3);

	std::cout << "a4: ";
	printArray(a4);

	int x = 2;
	std::cin >> x;
    return 0;
}

