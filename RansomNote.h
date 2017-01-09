#pragma once

#include "stdc++.h"
using namespace std;

//Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines; otherwise, it will return false.
//Each letter in the magazine string can only be used once in your ransom note.
//Note:
//You may assume that both strings contain only lowercase letters.
//canConstruct("a", "b") -> false
//canConstruct("aa", "ab") -> false
//canConstruct("aa", "aab") -> true
//https://leetcode.com/problems/ransom-note/


class RansomNote
{
public:

	RansomNote()
	{
	}

	~RansomNote()
	{
	}

	bool canConstruct(string ransomNote, string magazine)
	{
		int* storage = new int[128];
		for (int i = 0; i<128; i++)
		{
			storage[i] = 0;
		}
		for (int i = 0; i<ransomNote.size(); i++)
		{
			storage[ransomNote.at(i)]++;
		}
		for (int i = 0; i<magazine.size(); i++)
		{
			storage[magazine.at(i)]--;
		}
		for (int i = 0; i<128; i++)
		{
			if (storage[i]>0)
			{
				return false;
			}
		}
		return true;
	}
};

