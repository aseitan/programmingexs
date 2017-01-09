#pragma once

#include "stdc++.h"
using namespace std;

//Given two arrays, write a function to compute their intersection.
//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return[2, 2].
//Note :
//	 Each element in the result should appear as many times as it shows in both arrays.
//	 The result can be in any order.
//	 Follow up :
//What if the given array is already sorted ? How would you optimize your algorithm ?
//What if nums1's size is small compared to nums2's size ? Which algorithm is better ?
//What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once ?
//https://leetcode.com/problems/intersection-of-two-arrays-ii/


class IntersectionTwoArraysII
{
public:

	IntersectionTwoArraysII()
	{
	}

	~IntersectionTwoArraysII()
	{
	}

	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
	{
		vector<int> retVal;

		unsigned int minSize = 0;
		int chosen1 = true;
		if (nums1.size() > nums2.size())
		{
			minSize = nums2.size();
			chosen1 = false;
		}
		else
		{
			minSize = nums1.size();
		}

		if (chosen1 == false)
		{
			for (unsigned int i = 0; i<minSize; i++)
			{
				for (int j = 0; j<nums1.size(); j++)
				{
					if (nums2[i] == nums1[j])
					{
						retVal.push_back(nums2[i]);
						nums1[j] = -2147483647;
						break;
					}
				}
			}
		}
		else
		{
			for (unsigned int i = 0; i<minSize; i++)
			{
				for (int j = 0; j<nums2.size(); j++)
				{
					if (nums1[i] == nums2[j])
					{
						retVal.push_back(nums1[i]);
						nums2[j] = -2147483647;
						break;
					}
				}
			}
		}

		return retVal;
	}
};

