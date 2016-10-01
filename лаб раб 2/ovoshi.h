#pragma once
#include "eda.h"
#include "мясо.h"
class ovoshi :public eda
{
	int tsena; 
public:
	class luck
	{
		int kolich;
	public:
		luck();
		~luck();
		void setKolich(int);
		int getKolich(void);
	}l;
	ovoshi();
	~ovoshi();
	void setTsena(int);
	int getTsena(void);
};