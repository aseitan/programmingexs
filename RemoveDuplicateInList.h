#pragma once
//Write code to remove duplicates from an unsorted linked list.
// How would u solve this problem without extra buffer

#include "stdc++.h"
using namespace std;

class RemoveDuplicateInList
{
public:

	RemoveDuplicateInList()
	{
		ListNode * head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = new ListNode(2);
		removeDuplicate(head);
	}

	~RemoveDuplicateInList()
	{
	}

	void removeDuplicate(ListNode *head)
	{
		if (!head) return;

		unordered_set<int> umap;
		ListNode * itr = head;
		
		umap.insert(itr->val);

		while (itr && itr->next)
		{
			if (umap.find(itr->next->val) != umap.end())
			{
				ListNode * temp = itr->next;
				itr->next = itr->next->next;
				delete temp;
			}
			if (itr->next)
				umap.insert(itr->next->val);
			itr = itr->next;
		}

	}
	//second solution: trivial, implement two iterating nodes.  O(n^2), where n is the length of the linked list
};

RemoveDuplicateInList rcd;