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
	
	

	//std :: cout << "\n LinkedList: " << start->getData(); // I know the data is atleast passing


}

void LinkedList::push_back(std::string input, Node prev_node)
{

	Node* new_node = new Node(input, nullptr);

    prev_node.setNext(new_node);  //Will this work? Yes, although only locally. 
	
								  //So the pointer is in prev_node but not inside head? 

	//std::cout << "\nThis is the pointer for the head " << ptr;


}
