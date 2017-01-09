#pragma once

#include "stdc++.h"
using namespace std;

//Given a string, find the first non - repeating character in it and return it's index. If it doesn't exist, return -1.
//Examples:
//s = "leetcode"
//return 0.
//s = "loveleetcode",
//return 2.
//Note: You may assume the string contain only lowercase letters.
//https://leetcode.com/problems/first-unique-character-in-a-string/


class FirsUniqueCharacterinString
{
public:

	FirsUniqueCharacterinString()
	{
	}

	~FirsUniqueCharacterinString()
	{
	}

	struct Storage
	{
		Storage()
		{
			firstPos = -1;
			occurences = 0;
		}

		int firstPos;
		int occurences;
	};

	int firstUniqChar(string s)
	{
		Storage *store = new Storage[128];

		for (int i = 0; i<s.size(); i++)
		{
			store[s.at(i)].occurences++;
			if (store[s.at(i)].firstPos < 0)
			{
				store[s.at(i)].firstPos = i;
			}
		}

		unsigned int returnPos = 0xFFFFFFFFu;

		for (int i = 0; i < 128; i++)
		{
			if (store[i].occurences == 1)
			{
				if (store[i].firstPos < returnPos) returnPos = store[i].firstPos;
			}
		}

		if (returnPos == 0xFFFFFFFFu) return -1;

		return returnPos;
	}

};

