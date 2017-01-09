#pragma once

//Write a function that takes a string as input and returns the string reversed.
//https://leetcode.com/problems/reverse-string/

class ReverseString
{
public:
	ReverseString(){};
	~ReverseString(){};

	void run(){};

	char* reverseString(char* s)
	{
		unsigned int leng = strlen(s);
		char* result = (char *)malloc(leng + 1 * sizeof(char));
		leng--;
		unsigned int index = 0;

		//int8_t* pntr = reinterpret_cast<int8_t *>(result);

		while (s[index] != '\0')
		{
			result[leng - index] = s[index];
			index++;
		}

		result[++leng] = '\0';

		return result;
	}
};

