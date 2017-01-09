#pragma once

#include "stdc++.h"
using namespace std;

//Given two binary trees, write a function to check if they are equal or not.
//Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
//https://leetcode.com/problems/same-tree/

class SameTree
{
public:

	SameTree()
	{
	}

	~SameTree()
	{
	}

	bool isSameTree(TreeNode *p, TreeNode *q)
	{
		if (p == NULL && q == NULL)
		{
			return true;
		}
		else if (p == NULL)
		{
			return false;
		}
		else if (q == NULL)
		{
			return false;
		}

		return isSameTree(q->left, p->left) && isSameTree(q->right, p->right) && p->val == q->val;
	}
};

