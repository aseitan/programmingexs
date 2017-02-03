#pragma once
//write code to partition a linked list around a value x such that all nodes less than x com before all nodes greater than or equal to x

#include "stdc++.h"
using namespace std;

class PartitionLinkedList
{
public:

	PartitionLinkedList()
	{
		ListNode* head = new ListNode(9);
		head->next = new ListNode(8);
		head->next->next = new ListNode(1); //I'm lazy, get over it.

		listNodesLinkedList(head);
		listNodesLinkedList(partitionList(head, 5));
	}

	~PartitionLinkedList()
	{
	}

	void listNodesLinkedList(ListNode* head)
	{
		if (head)
		{
			cout << "val: " << head->val << endl;
			listNodesLinkedList(head->next);
		}
	}

	ListNode* partitionList(ListNode * head, int val)	
	{
		if (head == nullptr)
		{
			return nullptr;
		}
		
		ListNode * lessThan = new ListNode{ 0 };
		ListNode * greaterThan = new ListNode{ 0 };

		ListNode * firstLess = lessThan;
		ListNode * firstGreater = greaterThan;

		while (head)
		{
			if (head->val < val)
			{
				lessThan->next = head;
				lessThan = lessThan->next;
			}
			else
			{
				greaterThan->next = head;
				greaterThan = greaterThan->next;
			}
			head = head->next;
		}
		
		lessThan->next = firstGreater->next;;
		firstLess = firstLess->next;
		greaterThan->next = nullptr;

		delete firstGreater;

		return firstLess;
	}
};

PartitionLinkedList pll;
