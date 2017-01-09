#pragma once

#include "stdc++.h"
using namespace std;

//Write a program that outputs the string representation of numbers from 1 to n.
//But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”.For numbers which are multiples of both three and five output “FizzBuzz”.
//https://leetcode.com/problems/fizz-buzz/


class FizzBuzz
{
public:
	FizzBuzz();
	~FizzBuzz();
	void run(){};

	vector<string> fizzBuzz(int n)
	{
		vector<string> retVal;

		for (int i = 1; i <= n; i++)
		{
			int digitSum = 0;
			int k = i;
			while (k != 0)
			{
				digitSum = digitSum + k % 10;
				k = k / 10;
			}

			bool isfive = false;
			bool isthree = false;

			if (i % 10 == 0 || i % 10 == 5)
			{
				isfive = true;
			}
			if (digitSum != 0 && digitSum % 3 == 0)
			{
				isthree = true;
			}

			if (isthree && isfive)
			{
				retVal.push_back("FizzBuzz");
			}
			else if (isthree)
			{
				retVal.push_back("Fizz");
			}
			else if (isfive)
			{
				retVal.push_back("Buzz");
			}
			else
			{
				retVal.push_back(to_string(i));
			}
		}

		return retVal;
	}

};

