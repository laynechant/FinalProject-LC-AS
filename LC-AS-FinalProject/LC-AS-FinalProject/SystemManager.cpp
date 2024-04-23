#include "SystemManager.h"
#include "User.h"


SystemManager::SystemManager()
{
	
	fstream fin;
	
	fin.open(fileName);
	while (!fin.eof())
	{
		fin >> username >> password;
		//User* newUser = new User(username, password);
		//user.push_back(newUser);
	}
	
	fin.close();
}

SystemManager::~SystemManager()
{
}

int SystemManager::mainMenu()
{
	cout << "Enter a number for your desired action " << endl;
	cout << "1 to search for a Car " << endl; 
	cout << "2 to add a Car to your Cart " << endl; 
	cout << "3 to remove the Car from your Cart " << endl; 
	cout << "4 to add Multiple Drivers to your Cart " << endl; 
	cout << "5 to add your Insurance Info " << endl; 
	cout << "6 to Finalize your Invoice " << endl; 
	cout << "7 to print your current cart info " << endl; 
	cout << "8 to save your list " << endl; 
	cout << "9 to load a past shopping list " << endl; 
	cin >> num;
	return num; 
}


int SystemManager::adminMenu()
{
	cout << "Enter a number for your desired action " << endl;
	cout << "1 to Manage Inventory " << endl; 
	cout << "2 to add/update items to the Inventory " << endl; 
	cout << "3 to modify Car features " << endl; 
	cin >> num1; 
	return num1;
}


void SystemManager::printInfo()
{
	for (int i = 0; i < user.size(); i++)
	{
		cout << user[i]->getUsername() << endl;
	}

	
}
