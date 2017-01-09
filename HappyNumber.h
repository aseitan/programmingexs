#pragma once

#include "stdc++.h"
using namespace std;

//Write an algorithm to determine if a number is "happy".
//
//A happy number is a number defined by the following process : Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
//
//Example : 19 is a happy number
//
//		  12 + 92 = 82
//		  82 + 22 = 68
//		  62 + 82 = 100
//		  12 + 02 + 02 = 1
//https://leetcode.com/problems/happy-number/

class HappyNumber
{
public:

	HappyNumber()
	{
	}

	~HappyNumber()
	{
	}
	bool isHappy(int n)
	{
		int steps = 7;

		while (n != 1 && steps > 0)
		{
			steps--;
			int temp = 0;
			while (n)
			{
				int c = n % 10; n /= 10;
				temp += c*c;
			}
			n = temp;
		}
		return (n == 1) ? true : false;

	}
};

