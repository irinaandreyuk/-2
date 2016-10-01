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
	cout << "Конструктор овощей\n";

}
ovoshi::~ovoshi()
{
	cout << "Деструктор овощей\n";
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
	cout << "Конструктор вложенного лука\n";

}
ovoshi::luck::~luck()
{
	cout << "Деструктор вложенного лука\n";
}