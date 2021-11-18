//=================================================================
// @author:     Ana Macavei
// @version:    1.2
//
//  Demonstrates: class implementation
//
//=================================================================



#include "StackLL.h"

Stack::Stack() {
	head = nullptr;

}


Stack::~Stack()
{
	Node* curr = head;
	while (curr != nullptr) {
		Node* nodeToDelete = curr;
		curr = curr->next;
		delete nodeToDelete;
	}
}

bool Stack::push(int itemToPush)
{
	Node* newNode = new Node;
	newNode->data = itemToPush;

	newNode->next = head;
	head = newNode;
	return true;
}

bool Stack::pop(int& itemPopped)
{
	if (empty())
	return false;

	itemPopped = head->data;

	Node* nodeToRemove = head;
	head = head->next;
	delete nodeToRemove;

	return true;
}

bool Stack::full()
{
	return false;
}


bool Stack::empty()
{
	if (head == nullptr)
		return true;
	else
	return false;
}
