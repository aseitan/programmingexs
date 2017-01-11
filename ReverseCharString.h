#pragma once
#include "stdc++.h"
using namespace std;
//reverse a null terminated string

class ReverseCharString
{
public:

	ReverseCharString()
	{
		run();
	}

	~ReverseCharString()
	{
	}

	void run()
	{
		char str[8] = "mnbvcxz";
		reverseChars(str);
		assert(0 == std::strcmp("zxcvbnm", str));
	}
	
	void reverseChars(char * str)
	{
		string rev{str};
		std::reverse(rev.begin(), rev.end());
		memcpy(str, rev.c_str(), rev.size());
	}

	//this version only works on a C compiler
	void reverseCharsCVersion(char * str)
	{
		char tmp;
		char* bgn = str;
		char* end = str;
		while (*(++end)){};
		--end;
		while (bgn < end)
		{
			tmp = *bgn;
			*bgn++ = *end;
			*end-- = tmp;
		}
	}
};

ReverseCharString rc;