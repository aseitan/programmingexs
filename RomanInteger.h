#pragma once

#include "stdc++.h"
using namespace std;

//Given a roman numeral, convert it to an integer.
//Input is guaranteed to be within the range from 1 to 3999.
//https://leetcode.com/problems/roman-to-integer/

class RomanInteger
{
public:

	RomanInteger()
	{
	}

	~RomanInteger()
	{
	}
	int isPozitive(const char &val, const char &rightVal)
	{
		switch (val)
		{
		case 'I':
			if (rightVal != 'I') return -1;
			break;
		case 'V':
			if (rightVal == 'X' || rightVal == 'L' || rightVal == 'C' || rightVal == 'D' || rightVal == 'M')
				return -1;
			break;
		case 'X':
			if (rightVal == 'L' || rightVal == 'C' || rightVal == 'D' || rightVal == 'M')
				return -1;
			break;
		case 'L':
			if (rightVal == 'C' || rightVal == 'D' || rightVal == 'M')
				return -1;
			break;
		case 'C':
			if (rightVal == 'D' || rightVal == 'M')
				return -1;
			break;
		case 'D':
			if (rightVal == 'M')
				return -1;
			break;

		case 'M':
		default:
			return 1;
		}
		return 1;
	}

	int romanToInt(string s)
	{
		std::map<char, int> roman_map;
		roman_map['I'] = 1;
		roman_map['V'] = 5;
		roman_map['X'] = 10;
		roman_map['L'] = 50;
		roman_map['C'] = 100;
		roman_map['D'] = 500;
		roman_map['M'] = 1000;

		unsigned int returnValue = 0;
		unsigned int i = 0;
		string input = s;
		unsigned int inputSize = input.length();

		for (; i<inputSize; i++)
		{
			unsigned int readValue = roman_map[input.at(i)];
			int sign = 1;
			if (i < inputSize - 1)
			{
				sign = isPozitive(input.at(i), input.at(i + 1));
			}
			returnValue += sign * readValue;
		}

		return returnValue;
	}
};

