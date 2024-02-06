#ifndef NODE_H
#define NODE_H
#include <string>

class Node
{

public: 

	Node();
	Node(std::string n);
	Node(std:: string n, Node* ptr);
	Node* getNext();
	void setNext(Node* ptr);
	std::string getData();
	void setData(std:: string n);
	std:: string data;
	Node* next;
	//Node* prev; 

	//THE FUCKING COPY CONSTRUCTOR (I HATE THEM)
	Node(Node& node_tobe_copied); 







};




#endif
