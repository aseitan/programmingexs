#pragma once

#include "stdc++.h"
using namespace std;

//Given an integer, write a function to determine if it is a power of two.
//https://leetcode.com/problems/power-of-two/

class PowerofTwo
{
public:

	PowerofTwo()
	{
	}

	~PowerofTwo()
	{
	}
	bool isPowerOfTwo(int n)
	{
		uint32_t count = 0;

		while (n > 1 && count<2)
		{
			if (n % 2 != 0) count++;
			n = n >> 1;
		}

		if (n == 1) count++;

		if (count == 1)
			return true;
		else
			return false;

	}
};

