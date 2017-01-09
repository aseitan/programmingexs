#pragma once

#include "stdc++.h"
using namespace std;

//Related to question Excel Sheet Column Title
//Given a column title as appear in an Excel sheet, return its corresponding column number.
//For example :
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//https://leetcode.com/problems/excel-sheet-column-number/

class ExcelSheetColumnNumber
{
public:

	ExcelSheetColumnNumber()
	{
	}

	~ExcelSheetColumnNumber()
	{
	}

	int titleToNumber(string s)
	{
		int returnVal = 0;
		int SL = s.length();

		for (int i = SL - 1; i >= 0; i--)
		{
			returnVal += std::pow(26, SL - i - 1) * (s.at(i) - 64);
		}

		return returnVal;
	}
};

