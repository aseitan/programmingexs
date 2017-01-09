#pragma once

#include "stdc++.h"
using namespace std;

//Given an integer, write a function to determine if it is a power of three.
//Follow up :
//Could you do it without using any loop / recursion ?
//https://leetcode.com/problems/power-of-three/


class PowerofThree
{
public:

	PowerofThree()
	{
	}

	~PowerofThree()
	{
	}

	bool isPowerOfThree(int n)
	{
		if (n <= 0) return false;
		return (pow(3, (int)(log10(n) / log10(3))) == n);
	}
};

