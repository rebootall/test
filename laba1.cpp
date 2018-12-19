#include <iostream>
#include "student.h"
#include <algorithm>

int main() 
{
	int temp;
	std::string S;
	int studentNum = 10;
	STUDENT** Students = new STUDENT*[studentNum];
	
	for(int i = 0; i < studentNum; i++)
	{
		Students[i] = new STUDENT();
		std::cout << "Enter name: " << std::endl;
		std::getline(std::cin, S);
		
		Students[i]->setName(S);
		std::cout << "Enter group: " << std::endl;
		std::cin >> temp;
		
		Students[i]->setGroup(temp);
		std::cout << "Enter score: " << std::endl;
		try 
		{
			for (int j = 0; j < 5; j++) 
			{
				std::cin >> temp;
				Students[i]->setScore(j, temp);
			}
		} 
		catch (std::exception& sae) 
		{
			std::cout << sae.what() << std::endl;
		}
	}
	std::sort(Students,Students+studentNum);
	bool noTwo = true;
	
	for(int i = 0; i < studentNum; i++)
	{
		if(Students[i]->hasTwo())
		{
			std::cout << Students[i]->getName() << " " <<Students[i]->getGroup() << std::endl;
			noTwo = false;
		}
	}

	if(noTwo)
	{
		std::cout << "There is no students with mark 2" << std::endl;
	}

	for(int i = 0; i < studentNum; i++)
	{
		delete Students[i];
	}
	delete [] Students;
	return 0;
}

