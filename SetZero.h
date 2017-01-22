#pragma once

//Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.

#define COLUMNS 6
#define LINES 6

#include "stdc++.h"
using namespace std;

class SetZero
{
public:

	SetZero()
	{
		int arr[LINES][COLUMNS] = { { 0, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 0 } };

		for (int i = 0; i < COLUMNS; i++)
		{
			for (int j = 0; j < LINES; j++)
				cout << arr[i][j];
			cout << endl;
		}
		cout << endl << endl;
		zeroOut(arr, COLUMNS, LINES);
		for (int i = 0; i < COLUMNS; i++)
		{
			for (int j = 0; j < LINES; j++)
				cout << arr[i][j];
			cout << endl;
		}
	}

	~SetZero()
	{
	}

	
	template<class InputIterator, class T>
	InputIterator genericFind(InputIterator first, InputIterator last, const T& val)
	{
		while (first != last) {
			if (*first == val) return first;
			++first;
		}
		return last;
	}

	void zeroOut(int matrix[LINES][COLUMNS], int rows, int columns)
	{
		int rowsFlagged[LINES] = { 0 };
		int columnsFlagged[COLUMNS] = { 0 };

		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
			{
				if (matrix[i][j] == 0)
				{
					rowsFlagged[i] = 1;
					columnsFlagged[j] = 1;
				}
			}
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
			{
				if (rowsFlagged[i] == 1 || columnsFlagged[j] == 1)
				{
					matrix[i][j] = 0;
				}
			}
	}
};

SetZero szr;