#pragma once

#include "stdc++.h"
using namespace std;

//Given two strings s and t, write a function to determine if t is an anagram of s.
//For example,
//s = "anagram", t = "nagaram", return true.
//s = "rat", t = "car", return false.
//Note:
//You may assume the string contains only lowercase alphabets.
//Follow up :
//What if the inputs contain unicode characters ? How would you adapt your solution to such case ?
//https://leetcode.com/problems/valid-anagram/


class ValidAnagram
{
public:

	ValidAnagram()
	{
	}

	~ValidAnagram()
	{
	}

	bool isAnagram(string s, string t)
	{
		if (s.length() != t.length()) return false;
		int pound[128];
		memset(pound, 0, 128 * sizeof(int));

		for (int i = 0; i < s.length(); i++)
		{
			pound[s.at(i)]++;
			pound[t.at(i)]--;
		}
		for (int j = 96; j < 126; j++)
			if (pound[j] != 0) return false;
		return true;
	}
};

