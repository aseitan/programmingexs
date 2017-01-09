#pragma once

#include "stdc++.h"
using namespace std;

//You are given a map in form of a two - dimensional integer grid where 1 represents land and 0 represents water.Grid cells are connected horizontally / 
//vertically(not diagonally).The grid is completely surrounded by water, and there is exactly one island(i.e., one or more connected land cells).The island
//doesn't have "lakes" (water inside that isn't connected to the water around the island).One cell is a square with side length 1. The grid is rectangular,
//width and height don't exceed 100. Determine the perimeter of the island.
//https://leetcode.com/problems/island-perimeter/

class IslandPerimeter
{
public:

	IslandPerimeter()
	{
	}

	~IslandPerimeter()
	{
	}


	unsigned int computeSides(vector<vector<int>>& grid, int i, int j)
	{
		unsigned int sides = 0;

		if (i == 0)
		{
			sides++;
		}
		else if (grid[i - 1][j] == 0)
		{
			sides++;
		}

		if (i == grid.size() - 1)
		{
			sides++;
		}
		else if (grid[i + 1][j] == 0)
		{
			sides++;
		}

		if (j == 0)
		{
			sides++;
		}
		else if (grid[i][j - 1] == 0)
		{
			sides++;
		}

		if (j == grid[i].size() - 1)
		{
			sides++;
		}
		else if (grid[i][j + 1] == 0)
		{
			sides++;
		}

		return sides;
	}

	int islandPerimeter(vector<vector<int>>& grid)
	{
		int perimeter = 0;

		for (unsigned int i = 0; i < grid.size(); i++)
		{
			for (unsigned int j = 0; j < grid[i].size(); j++)
			{
				if (grid[i][j]) perimeter += computeSides(grid, i, j);
			}
		}

		return perimeter;
	}

};

