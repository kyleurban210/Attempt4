#include "LinkedList.h"
#include "Node.h"               // Linked List has-a Node 
#include <iostream>
#include <string>
 

LinkedList::LinkedList()
{


	Node* start = new Node;



}

LinkedList::LinkedList(std::string input, Node* ptr)
{

	Node* start = new Node(input, nullptr);
	

	//This gets the data outta here and into the Node* head that exists in LinkedLists
	head.data = start->data;
	head.next = start->next; 
	
	

	std :: cout << "\n LinkedList: " << start->getData(); // I know the data is atleast passing


}
