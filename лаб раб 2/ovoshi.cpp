#include "stdafx.h"
#include <iostream>
#include "ovoshi.h"
using namespace std;
void ovoshi::setTsena(int i)
{
     tsena = i;
}
int ovoshi::getTsena(void)
{
	return tsena;
}
ovoshi::ovoshi()
{
	cout << "����������� ������\n";

}
ovoshi::~ovoshi()
{
	cout << "���������� ������\n";
}
void ovoshi::luck::setKolich(int u)
{
	kolich = u;
}
int ovoshi::luck::getKolich(void)
{
	return kolich;
}
ovoshi::luck::luck()
{
	cout << "����������� ���������� ����\n";

}
ovoshi::luck::~luck()
{
	cout << "���������� ���������� ����\n";
}