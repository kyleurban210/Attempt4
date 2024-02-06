#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>




int main()
{
	std::string input = ""; 
	std::string input2 = "test"; 

	std::cout << "Please type a word:   ";
	std::cin >> input; 

	LinkedList* listptr = new LinkedList(input, nullptr) ; 
	
	listptr->push_back(input2, listptr->head); 




	std::cout << "\nMain: " << listptr->head.getData(); //this is a shallow copy, which is why it isn't working. 
 


}