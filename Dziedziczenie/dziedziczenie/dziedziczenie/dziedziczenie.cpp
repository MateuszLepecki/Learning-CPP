// dziedziczenie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Punkt
{
	float x, y;
	string nazwa;
public:
	Punkt(string n="S", float a=0, float b=0)
	{
		nazwa = n;
		x = a;
		y = b;
	}

	void wyswietl()
	{
		cout << nazwa << "(" << x << "," << y << ")" << endl;
	}
};

class Kolo :public Punkt//klasa Kolo dziedziczy publicznie z klasy Punkt
{
	float promien;
	string nazwa;

public:
	Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
		:Punkt (np,a,b)
	{
		nazwa = nk;
		promien = pr;
	}

	void wyswietl()
	{
		cout << "kolo o nazwie " << nazwa << endl;
		cout << "srodek kola: " << endl;
		Punkt::wyswietl();
		cout << "promien kola: " << promien << endl;
		cout << "pole kola: " << 3.14*promien*promien << endl;
	}
};


int main()
{
	Kolo k1;
	k1.wyswietl();

	system("pause");
	return 0;
}
