#pragma once

#include "stdc++.h"
using namespace std;

//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be[1, 3, 12, 0, 0].
//Note:
//You must do this in - place without making a copy of the array.
//Minimize the total number of operations.
//https://leetcode.com/problems/move-zeroes/

class MoveZeroes
{
public:

	MoveZeroes()
	{
	}

	~MoveZeroes()
	{
	}
	void moveZeroes(vector<int>& nums)
	{
		unsigned int target = 0;
		unsigned int numsSize = nums.size();

		for (unsigned int i = 0; i < numsSize - target; i++)
		{
			if (nums[i] == 0)
			{
				target++;
				nums.erase(nums.begin() + i);
				nums.insert(nums.end(), 0);
				i--;
			}
		}
	}
};

