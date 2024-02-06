#include "Node.h"
#include <iostream>
#include <string>


Node::Node()
{

	data = ("");
	next = nullptr;


}

Node::Node(std::string n)
{

	data = n;

}

Node::Node(std::string n, Node* ptr)
{

	data = n;
	next = ptr;



}

Node* Node::getNext()
{

	return next;


}

void Node::setNext(Node* ptr)
{

	next = ptr;


}

std::string Node::getData()
{

	return data;


}

void Node::setData(std::string n)
{


	data = n;


}