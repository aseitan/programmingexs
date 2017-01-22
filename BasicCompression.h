#pragma once
//Implement a method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3
// If the compressed string would not become smaller, return the original string.

#include "stdc++.h"
using namespace std;

class BasicCompression
{
public:

	BasicCompression()
	{
		string sa = compr(string{"aabcccccaaa"});
		string sb = compr(string{"aaddbb"});
	}

	~BasicCompression()
	{
	}


	string compr(string str)
	{
		string res;
		unsigned int sz = str.size();
		if (sz == 0) return res;

		char ch = str[0];
		unsigned int repeats = 1;

		for (unsigned int i = 1; i < sz; i++)
		{
			if (ch == str[i])
			{
				//same char. continue iterating.
				repeats++;
			}
			else
			{
				//found new char. append it to the res string
				res.append(1, ch);
				res.append(to_string(repeats).c_str());
				ch = str[i];
				repeats = 1;
			}
		}
		res.append(1, ch);
		res.append(to_string(repeats).c_str());

		return sz > res.size() ? res : str;

	}
};


BasicCompression bc;