#pragma once

#include "stdc++.h"
using namespace std;

//Given a binary tree, find its maximum depth.
//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
//https://leetcode.com/problems/maximum-depth-of-binary-tree/


class MaximumDepthBinaryTree
{
public:

	MaximumDepthBinaryTree()
	{
	}

	~MaximumDepthBinaryTree()
	{
	}

	void traverse(TreeNode *current, unsigned int& index, unsigned int& max)
	{
		if (current->left != NULL)
		{
			traverse(current->left, (++index), max);
			if (index > max) max = index;
			index--;
		}
		if (current->right != NULL)
		{
			traverse(current->right, (++index), max);
			if (index > max) max = index;
			index--;
		}
	}


	int maxDepth(TreeNode *root)
	{
		unsigned int index = 0;
		unsigned int max = 0;

		if (root != NULL)
		{
			traverse(root, ++index, max);
		}

		if (index > max) max = index;
		return max;
	}

};

