#pragma once

#include "stdc++.h"
using namespace std;


//Invert a binary tree.
//
//4
/// \
//2     7
/// \ / \
//1   3 6   9
//to
//4
/// \
//7     2
/// \ / \
//9   6 3   1
//https://leetcode.com/problems/invert-binary-tree/

class InvertBinaryTree
{
public:

	InvertBinaryTree()
	{
	}

	~InvertBinaryTree()
	{
	}
	TreeNode* invertTree(TreeNode* root)
	{
		if (root != NULL)
		{
			TreeNode* temp = root->left;
			root->left = root->right;
			root->right = temp;
			invertTree(root->left);
			invertTree(root->right);
		}
		return root;
	}

};

