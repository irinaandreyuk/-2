#pragma once
#include "eda.h"
#include <string>
using namespace std;
class  meat:public eda
{
	string vid;
public:
	meat();
	~meat();
	void setVid(string);
	string getVid(void);
};