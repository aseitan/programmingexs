#pragma once

#include "stdc++.h"
using namespace std;

//Given a sorted linked list, delete all duplicates such that each element appear only once.
//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class RemoveDuplicatesSortedList
{
public:

	RemoveDuplicatesSortedList()
	{
	}

	~RemoveDuplicatesSortedList()
	{
	}
	ListNode *deleteDuplicates(ListNode *head)
	{
		ListNode* iterator = head;

		while (iterator && iterator->next)
		{
			if (iterator->val != iterator->next->val)
			{
				iterator = iterator->next;
			}
			else
			{
				if (iterator->next->next)
				{
					iterator->next = iterator->next->next;
				}
				else
				{
					iterator->next = NULL;
				}
			}
		}

		return head;
	}

};

