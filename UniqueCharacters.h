#pragma once
#include "stdc++.h"
using namespace std;

//Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional structures ?




class UniqueCharacters
{
public:
	UniqueCharacters(){ run(); };
	virtual ~UniqueCharacters(){};

	void run()
	{
		assert(true == hasAllUnique(string{ "qwerty" }));
		assert(false == hasAllUnique(string{ "qwertyy" }));
	}

	//////////////////////////////////////////
	
	bool hasAllUnique(string str)
	{ 
		return hasAllUnique(str.c_str(), str.size());
	}

	//O(n) time complexity (size of the string)
	//O(1) space - fixed size extra vars
	bool hasAllUnique(const char* str, unsigned int sz)
	{
		bool data[256] = {0};
		if (sz > 256) return false;

		for (unsigned int i = 0; i < sz; i++)
		{
			if (data[str[i]]) 
				return false;
			data[str[i]] = true;
		}
		return true;
	}
	//alternative: use smalled containers to flag character appearance: e.g. for a-z use one 32-bit integer.
	//alternative: compare each character with each other character. Time complexity O(n^2)
	//alternative: sort the string and then compare the neighbour values. Time complexity O(nlogn) -> sorting time
	//////////////////////////////////////////
};

UniqueCharacters chars;

