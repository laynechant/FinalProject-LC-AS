#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std; 

class User;

class SystemManager
{
public:
	// handles both Menus for shoppers and admin 
	SystemManager();
	~SystemManager();
	int mainMenu();
	int adminMenu();
	void printInfo();
	
protected:
	string username;
	string password;

private:
	int num; 
	int num1;

	vector<User*> user; 
	const string fileName = "UserInfo.txt"; 
};