#include "stdafx.h"
#include <iostream>
#include "lunch.h"
using namespace std;
void lunch::setStoim(int k)
{
	stoim = k;
}
int lunch::getStoim(void)
{
	return stoim;
}
lunch::lunch()
{
	cout << "����������� �����\n";

}
lunch::~lunch()
{
	cout << "���������� �����\n";
}
