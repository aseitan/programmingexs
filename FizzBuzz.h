#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

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

