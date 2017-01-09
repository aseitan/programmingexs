#pragma once

//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//Given two integers x and y, calculate the Hamming distance.
//https://leetcode.com/problems/hamming-distance/

class HammingDistance
{
public:
	HammingDistance(){};
	~HammingDistance(){};


	void run()
	{

	}

	int hammingDistance(int x, int y)
	{
		int res = x ^ y;
		int diffs = 0;
		while (res)
		{
			if (res&(int)1)
			{
				diffs++;
			}
			res = (res >> 1);
		}
		return diffs;
	}


};

