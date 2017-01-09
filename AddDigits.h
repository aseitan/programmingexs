#pragma once

#include "stdc++.h"
using namespace std;

//Given a non - negative integer num, repeatedly add all its digits until the result has only one digit.
//For example :
//Given num = 38, the process is like : 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
//Follow up :
//Could you do it without any loop / recursion in O(1) runtime ?
//https://leetcode.com/problems/add-digits/

class AddDigits
{
public:

	AddDigits()
	{
	}

	~AddDigits()
	{
	}

	int addDigits(int num)
	{
		if (num <= 9) return num;

		int ret = num % 9;
		if (ret == 0) ret = 9;

		return ret;
	}
};

