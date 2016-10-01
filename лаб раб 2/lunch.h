#pragma once
#include "мясо.h"
#include "ovoshi.h"
#include "hleb.h"
#include "eda.h"
using namespace std;
class  lunch:public  meat,public hleb,public ovoshi
{	int stoim;
public:
	lunch();
	~lunch();
	void setStoim(int);
	int getStoim(void);
};