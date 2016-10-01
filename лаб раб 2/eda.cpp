#include "stdafx.h"
#include <iostream>
#include "eda.h"
using namespace std;
void eda::setkkal(int k)
{
	kkal = k;
}
int eda::getkkal(void)
{
	return kkal;
}
eda::eda()
{
	cout << "Конструктор еды\n";

}
eda::~eda()
{
	cout << "Деструктор еды\n";
}
