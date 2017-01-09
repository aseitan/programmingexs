#pragma once

#include "stdc++.h"
using namespace std;

//Given an array of integers, find if the array contains any duplicates.Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
//https://leetcode.com/problems/contains-duplicate/

class ContainsDuplicate
{
public:

	ContainsDuplicate()
	{
	}

	~ContainsDuplicate()
	{
	}

	bool containsDuplicate(vector<int>& nums)
	{
		std::sort(nums.begin(), nums.end());

		if (nums.size() > 0)
		{
			for (int i = 0; i < nums.size(); i++)
			{
				int alpha = nums[i];
				nums[i] = -1;
				if (std::binary_search(nums.begin(), nums.end(), alpha)) return true;
				nums[i] = alpha;
			}
		}
		else return false;
	}
};

