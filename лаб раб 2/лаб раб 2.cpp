// лаб раб 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "eda.h"
#include "мясо.h"
#include "ovoshi.h"
#include "hleb.h"
#include "lunch.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "rus");
	{
		eda h;
		h.setkkal(228);
		cout << "кол-во калорий " << h.getkkal()<<endl;
	}
	cout << "---------------" << endl;
	{
		meat r;
		r.setVid("курица");
		r.setkkal(34);
		cout << "\nвид мяса " << r.getVid() << endl;
		cout << "кол-во калорий " << r.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
	{
		ovoshi q;
		q.setTsena(18);
		q.setkkal(50);
		q.l.setKolich(1);
		cout << "\nцена " << q.getTsena() << endl;
		cout << "Количество лука " << q.l.getKolich() << endl;
		cout << "кол-во калорий " << q.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("черный");
			z.setkkal(130);
			cout << "\nтип  " << z.getTip() << endl;
			cout << "кол-во калорий " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("черный");
			z.setkkal(130);
			cout << "\nтип  " << z.getTip() << endl;
			cout << "кол-во калорий " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			lunch z;
			z.setStoim(500);
			z.setTip("Черный");
			z.setTsena(30);
			z.setVid("Курица");
			z.l.setKolich(1);
			
			cout << "\nСтоимость ланча  " << z.getStoim() << endl;
			cout << "Цена овощей  " << z.getTsena() << endl;
			cout << "кол-во лука" << z.l.getKolich() << endl;
			cout << "тип хлеба " << z.getTip() << endl;
			cout << "вид мяса " << z.getVid() << endl<<endl;
			
		}
		cout << "---------------" << endl;
	return 0;
}

