#pragma once
//add two numbers represented by linked list.

#include "stdc++.h"
using namespace std;

class LinkedListSum
{
public:

	LinkedListSum()
	{
		cout <<  endl << "Add lists : " << endl;
		ListNode* lista = new ListNode(9);
		lista->next = new ListNode(9);
		lista->next->next = new ListNode(9); //I'm lazy, get over it.
		
		ListNode* listb = new ListNode(1);


		listNodesLinkedList(lista);
		listNodesLinkedList(listb);

		cout << "partitioned:" << endl;
		listNodesLinkedList(addLinkedLists(lista, listb));

	}

	~LinkedListSum()
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

	ListNode * addLinkedLists(ListNode * linka, ListNode* linkb)
	{
		int carry = 0;
		
		ListNode* sumList = nullptr;
		ListNode * returnList;

		while (linka || linkb || carry)
		{
			if (!sumList)
			{
				sumList = new ListNode(carry);
				returnList = sumList;
			}
			else
			{
				sumList->next = new ListNode(carry);
				sumList = sumList->next;
			}

			if (linka)
			{
				sumList->val += linka->val;
			}
			if (linkb)
			{
				sumList->val += linkb->val;
			}

			carry = sumList->val / 10;
			sumList->val = sumList->val % 10;

			if (linka) linka = linka->next;
			if (linkb) linkb = linkb->next;
		}

		return returnList;
	}
};


LinkedListSum lls;
