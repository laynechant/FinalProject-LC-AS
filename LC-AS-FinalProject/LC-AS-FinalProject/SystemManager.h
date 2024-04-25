#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std; 



class SystemManager
{
public:
	// handles both Menus for shoppers and admin 
	SystemManager();
	~SystemManager();
	int mainMenu();
	int adminMenu();
	void printInfo();
	void setInsurance();


private:
	int num; 
	int num1;
	string insurance;  
	const string fileName = "UserInfo.txt"; 
};