#pragma once

#include "stdc++.h"
using namespace std;

//Say you have an array for which the ith element is the price of a given stock on day i.
//
//If you were only permitted to complete at most one transaction(ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
//
//Example 1:
//Input : [7, 1, 5, 3, 6, 4]
//Output : 5
//
//		 max.difference = 6 - 1 = 5 (not 7 - 1 = 6, as selling price needs to be larger than buying price)
//		 Example 2 :
//	 Input : [7, 6, 4, 3, 1]
//		 Output : 0
//
//				  In this case, no transaction is done, i.e.max profit = 0.
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class BestTimeBuyStock
{
public:

	BestTimeBuyStock()
	{
	}

	~BestTimeBuyStock()
	{
	}
	int maxProfit(vector<int>& prices)
	{
		if (prices.size() < 2) return 0;

		int returnDiff = 0;
		int indexMaxPrice = -1;
		int indexMinPrice = -1;
		int maxPrice = 0;  //sell
		int minPrice = 65535;  //buy

		for (int i = 0; i<prices.size(); i++)
		{
			if (maxPrice < prices[i])
			{
				maxPrice = prices[i];
				indexMaxPrice = i;
				if (indexMinPrice < indexMaxPrice)
				{
					int maxR = maxPrice - minPrice;
					if (maxR> returnDiff) returnDiff = maxR;
				}
			}
			if (minPrice > prices[i])
			{
				minPrice = prices[i];
				indexMinPrice = i;

				indexMaxPrice = -1;
				maxPrice = 0;
			}
		}

		return returnDiff;
	}
};

