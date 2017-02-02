#pragma once
//implement an algorithm to delete a node in the middle of a singly linked list, given only access to that node

#include "stdc++.h"
using namespace std;


class DeleteNode
{
public:

	DeleteNode()
	{
		ListNode* head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = new ListNode(3); //I'm lazy, get over it.
		listNodesLinkedList(head);
		deleteNode(head->next);
		cout << "" << endl;
		listNodesLinkedList(head);
	}

	~DeleteNode()
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
	void deleteNode(ListNode *node)
	{
		if (!node) return;

		if (!node->next)
		{
			//cannot remove the last node
			return;
		}

		node->val = node->next->val;
		node->next = node->next->next;
	}
};

DeleteNode dk;
