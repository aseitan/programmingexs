﻿#pragma once

#include "stdc++.h"
using namespace std;

//Given an array of size n, find the majority element.The majority element is the element that appears more than ⌊ n / 2 ⌋ times.
//You may assume that the array is non - empty and the majority element always exist in the array.
//https://leetcode.com/problems/majority-element/

class MajoritElement
{
public:

	MajoritElement()
	{
	}

	~MajoritElement()
	{
	}

	int majorityElement(vector<int>& nums)
	{
		int candidate = nums[0], counter = 0;
		int numSize = nums.size();

		for (int i = 0; i<numSize; i++)
		{
			if (counter == 0)
			{
				candidate = nums[i];
				counter = 1;
			}
			else
			{
				if (nums[i] == candidate)
				{
					counter++;
				}
				else
				{
					counter--;
				}
			}
		}

		return candidate;
	}
};

