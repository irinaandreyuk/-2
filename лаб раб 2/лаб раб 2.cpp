// ��� ��� 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "eda.h"
#include "����.h"
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
		cout << "���-�� ������� " << h.getkkal()<<endl;
	}
	cout << "---------------" << endl;
	{
		meat r;
		r.setVid("������");
		r.setkkal(34);
		cout << "\n��� ���� " << r.getVid() << endl;
		cout << "���-�� ������� " << r.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
	{
		ovoshi q;
		q.setTsena(18);
		q.setkkal(50);
		q.l.setKolich(1);
		cout << "\n���� " << q.getTsena() << endl;
		cout << "���������� ���� " << q.l.getKolich() << endl;
		cout << "���-�� ������� " << q.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("������");
			z.setkkal(130);
			cout << "\n���  " << z.getTip() << endl;
			cout << "���-�� ������� " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("������");
			z.setkkal(130);
			cout << "\n���  " << z.getTip() << endl;
			cout << "���-�� ������� " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			lunch z;
			z.setStoim(500);
			z.setTip("������");
			z.setTsena(30);
			z.setVid("������");
			z.l.setKolich(1);
			
			cout << "\n��������� �����  " << z.getStoim() << endl;
			cout << "���� ������  " << z.getTsena() << endl;
			cout << "���-�� ����" << z.l.getKolich() << endl;
			cout << "��� ����� " << z.getTip() << endl;
			cout << "��� ���� " << z.getVid() << endl<<endl;
			
		}
		cout << "---------------" << endl;
	return 0;
}

