#pragma once
//Given an image represented by an NxN matrix, where each pixel iin the image is 4bytes, write a method to rotate the image 90 degrees. Can you do this in place ?

#include "stdc++.h"
using namespace std;

#define MAX_LINES 6

class MatrixRotation
{
public:

	MatrixRotation()
	{
		int arr[][MAX_LINES] = { { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 } };
		for (int i = 0; i < MAX_LINES; i++)
		{
			for (int j = 0; j < MAX_LINES; j++)
				cout << arr[i][j];
			cout << endl;
		}
		cout << endl << endl;
		rotateImg(arr, MAX_LINES);
		for (int i = 0; i < MAX_LINES; i++)
		{
			for (int j = 0; j < MAX_LINES; j++)
				cout << arr[i][j];
			cout << endl;
		}
	}

	~MatrixRotation()
	{
	}
	
	void rotateImg(int arr[][MAX_LINES], int n)
	{
		if (n == 1) return;

		for (int layer = 0; layer < n / 2; layer++)
		{
			int first = layer;
			int last = n - 1 - layer;
			for (int i = first; i < last; i++)
			{
				int offset = i - first;
				int top = arr[first][i];
				arr[first][i] = arr[last - offset][first];

				arr[last - offset][first] = arr[last][last - offset];
				arr[last][last - offset] = arr[i][last];

				arr[i][last] = top;

			}
		}
	}

};


MatrixRotation mr;
