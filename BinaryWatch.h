#pragma once

#include "stdc++.h"
using namespace std;

//A binary watch has 4 LEDs on the top which represent the hours(0 - 11), and the 6 LEDs on the bottom represent the minutes(0 - 59).
//Each LED represents a zero or one, with the least significant bit on the right.
//For example, the above binary watch reads "3:25".
//Given a non - negative integer n which represents the number of LEDs that are currently on, return all possible times the watch could represent.
//Example:
//
//Input : n = 1
//Return : ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]
//	 Note :
//		  The order of output does not matter.
//		  The hour must not contain a leading zero, for example "01:00" is not valid, it should be "1:00".
//		  The minute must be consist of two digits and may contain a leading zero, for example "10:2" is not valid, it should be "10:02".
//https://leetcode.com/problems/binary-watch/

class BinaryWatch
{
public:

	BinaryWatch()
	{
	}

	~BinaryWatch()
	{
	}


	unsigned int countBitsInHours(unsigned short val)
	{
		unsigned int founds = 0;
		for (int i = 0; i < 4; i++)
		{
			if (((val & 0x03C0) >> (6 + i)) & 0x0001)
				founds++;
		}
		return founds;
	}
	unsigned int countBitsInMinutes(unsigned short val)
	{
		int founds = 0;
		for (int i = 0; i < 6; i++)
		{
			if ((val >> i) & 0x0001)founds++;
		}
		return founds;
	}
	vector<string> readBinaryWatch(int num)
	{
		vector<string> retVal;

		for (unsigned short i = 0x0u; i <= 0x03FF; i++)
		{
			if (countBitsInHours(i) + countBitsInMinutes(i) == num)
			{
				string s;
				unsigned short hours = (i >> 6);
				if (hours >= 0x000Cu)  continue;
				s.append(to_string(hours));
				unsigned short minutes = (i & 0x003F);
				if (minutes >= 0x003Cu) continue;
				s.append(":");
				string mi = to_string(minutes);
				if (mi.size() == 1)
				{
					string real_min = "0";
					real_min.append(mi);
					s.append(real_min);
				}
				else
				{
					s.append(mi);
				}

				retVal.push_back(s);
			}
		}
		return retVal;
	}
};

