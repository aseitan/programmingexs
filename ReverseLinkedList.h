#pragma once

#include "stdc++.h"
using namespace std;

//Reverse a singly linked list.
//https://leetcode.com/problems/reverse-linked-list/

class ReverseLinkedList
{
public:

	ReverseLinkedList()
	{
	}

	~ReverseLinkedList()
	{
	}

	struct ListNode* reverseList(struct ListNode* head)
	{
		struct ListNode* current = head;
		struct ListNode* previous = NULL;
		struct ListNode* returnVal = head;

		while (current)
		{
			struct ListNode* next = current->next;
			current->next = previous;
			previous = current;
			current = next;
			if (current != NULL)
				returnVal = current;
		}
		return returnVal;
	}


};

