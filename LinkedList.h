#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <string>

class LinkedList
{

public:


	Node head; // im returning the wrong head

	LinkedList();
	LinkedList(std::string input, Node* ptr);
	void push_back(std::string input, Node prev_node); 
	





};

#endif
