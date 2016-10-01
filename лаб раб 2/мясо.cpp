#include "stdafx.h"
#include <iostream>
#include "мясо.h"
using namespace std;
void meat::setVid(string n)
{
	vid = n;
}
string meat::getVid(void)
{
	return vid;
}
meat::meat()
{
	cout << "Конструктор мяса\n";

}
meat::~meat()
{
	cout << "Деструктор мяса\n";
}
