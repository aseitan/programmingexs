#pragma once
//Given two string, write a method to decide if one is a permutation of the other.

#include "stdc++.h"
using namespace std;



class StringPerm
{
public:

	StringPerm()
	{
		string s1 = "223456";
		string s2 = "654321";
		bool b = isPerm(s1, s2);
	}

	~StringPerm()
	{
	}

	//potential solution 1: sort the strings and then compare them

	//potential solution 2: the strings both have the same character count
	bool isPerm(const string &s1, const string &s2)
	{
		int s1sz = s1.size();
		int s2sz = s2.size();
		if (s1sz != s2sz) return false;

		int data1[256] = {};
		int data2[256] = {};

		for (int i = 0; i < s1sz; i++)
		{
			data1[s1.at(i)]++;
			data2[s2.at(i)]++;
		}
		for (int i = 0; i < 256; i++)
		{
			if (data1[i] != data2[i]) return false;
		}
		return true;
	}
};

StringPerm perm;
