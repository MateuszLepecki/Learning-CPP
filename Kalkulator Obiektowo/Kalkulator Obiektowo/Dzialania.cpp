
#include "stdafx.h"
#include "Dzialania.h"
#include <iostream>

CDzialania::CDzialania(float _skladnik1, float _skladnik2)
:skladnik1(_skladnik1)
, skladnik2(_skladnik2)
{
	//skladnik1 = _skladnik1;
	//skladnik2 = _skladnik2;
}

void CDzialania::wpisz_skladniki()
{
	cout << "podaj 1 liczbe:" << endl;
	cin >> skladnik1;
	cout << "podaj 2 liczbe:" << endl;
	cin >> skladnik2;
}

int CDzialania::dodawanie()
{
	wynik = skladnik1 + skladnik2;
	return 1;
}

int CDzialania::odejmowanie()
{
	wynik= skladnik1 - skladnik2;
	return 1;
}

int CDzialania::mnozenie()
{
	wynik=skladnik1 * skladnik2;
	return 1;
}

int CDzialania::dzielenie()
{
	if (skladnik2 != 0)
	{
		wynik = skladnik1 / skladnik2;
		return 1;
	}
	
	else
	{
		cout << "nie mozna dzielic przez 0" << endl;
		wynik = skladnik1 / skladnik2;
		return 0;
	}
}

void CDzialania::pokaz_wynik(int test)
{
	if (test==1)
	cout << "Wynik to : " << wynik << endl;
}