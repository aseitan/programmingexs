#pragma once

#include "stdc++.h"
using namespace std;

//Given two arrays, write a function to compute their intersection.
//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return[2].
//Note :
//	 Each element in the result must be unique.
//	 The result can be in any order.
//https://leetcode.com/problems/intersection-of-two-arrays/

class IntersectionTwoArrays
{
public:

	IntersectionTwoArrays()
	{
	}

	~IntersectionTwoArrays()
	{
	}

	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
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

		std::sort(nums1.begin(), nums1.end());
		std::sort(nums2.begin(), nums2.end());

		if (chosen1)
		{
			for (unsigned int i = 0; i<minSize; i++)
			{
				if (std::binary_search(nums2.begin(), nums2.end(), nums1[i]))
				{
					{
						if (!std::binary_search(retVal.begin(), retVal.end(), nums1[i])) retVal.push_back(nums1[i]);
					}

				}
			}
		}
		else
		{
			for (unsigned int i = 0; i<minSize; i++)
			{
				if (std::binary_search(nums1.begin(), nums1.end(), nums2[i]))
				{
					if (!std::binary_search(retVal.begin(), retVal.end(), nums2[i])) retVal.push_back(nums2[i]);

				}
			}
		}

		return retVal;
	}
};

