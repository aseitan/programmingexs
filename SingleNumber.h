#pragma once

#include "stdc++.h"
using namespace std;

//Given an array of integers, every element appears twice except for one.Find that single one.
//Your algorithm should have a linear runtime complexity.Could you implement it without using extra memory ?
//https://leetcode.com/problems/single-number/


class SingleNumber
{
public:

	SingleNumber()
	{
	}

	~SingleNumber()
	{
	}

	int singleNumber(vector<int>& nums)
	{
		unsigned int numSize = nums.size();
		unsigned int stack = 0;

		map<int, int> mapping;

		for (unsigned int i = 0; i<numSize; i += 1)
		{
			if (mapping[nums[i]] == 0)
			{
				mapping[nums[i]] = 1;
				stack += nums[i];
			}
			else
			{
				mapping[nums[i]] = 0;
				stack -= nums[i];
			}
		}
		return stack;
	}

};

