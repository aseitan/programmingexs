#pragma once

#include "stdc++.h"
using namespace std;

//You are climbing a stair case.It takes n steps to reach to the top.
//Each time you can either climb 1 or 2 steps.In how many distinct ways can you climb to the top ?
//Note : Given n will be a positive integer.
//https://leetcode.com/problems/climbing-stairs/

class ClimbingStairs
{
public:

	ClimbingStairs()
	{
	}

	~ClimbingStairs()
	{
	}

	void updateFibbonaci(int& fibA, int& fibB)
	{
		int temp = fibA + fibB;
		fibA = fibB;
		fibB = temp;
	}

	int climbStairs(int n)
	{

		if (n == 0) return 0;
		if (n == 1) return 1;
		if (n == 2) return 2;

		int fibbonaci[2] = { 1, 2 };

		for (int i = 0; i<n - 2; i++)
		{
			updateFibbonaci(fibbonaci[0], fibbonaci[1]);
		}
		return fibbonaci[1];
	}

};

