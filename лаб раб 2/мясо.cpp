#include "stdafx.h"
#include <iostream>
#include "����.h"
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
	cout << "����������� ����\n";

}
meat::~meat()
{
	cout << "���������� ����\n";
}
