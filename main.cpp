#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>




int main()
{
	std::string input = ""; 

	std::cout << "Please type a word:   ";
	std::cin >> input; 

	LinkedList* listptr = new LinkedList(input, nullptr) ; 
	
	


	std::cout << "\nMain: " << listptr->head.getData(); //this is a shallow copy, which is why it isn't working. 
 


}