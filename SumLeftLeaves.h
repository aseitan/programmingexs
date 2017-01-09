#pragma once

#include "stdc++.h"
using namespace std;

//Find the sum of all left leaves in a given binary tree.
//Example:
//3
/// \
//9  20
/// \
//15   7
//There are two left leaves in the binary tree, with values 9 and 15 respectively.Return 24.
//https://leetcode.com/problems/sum-of-left-leaves/


class SumLeftLeaves
{
public:

	SumLeftLeaves()
	{
	}

	~SumLeftLeaves()
	{
	}

	int sumOfLeftLeaves(TreeNode* root, bool isLeft = false)
	{
		if (root)
		{
			if (root->left == nullptr && root->right == nullptr)
			{
				return isLeft ? root->val : 0;
			}
			else
			{
				return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);
			}
		}
		else
		{
			return 0;
		}
	}
};

