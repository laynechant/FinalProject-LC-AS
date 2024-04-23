#pragma once
#include <iostream>
#include <fstream>
#include "SystemManager.h"
using namespace std;

class User : public SystemManager
{
public:
    User(string username1, string password1);
    string getUsername() { return username1; };
    ~User();
private: 
    string username1; 
    string password1; 
   
};