// kontener vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;


class czlowiek
{
public:
	string imie;
	string nazwisko;
	string numer;
	czlowiek(string ximie, string xnazwisko, string xnumer);
};

int main()
{
	vector < czlowiek > osoba;
	cout << "Baza Osob\n1.-Lista osob\n2.-Dodaj osobe\n3.-Wyjscie";
	char odp=0;
	while (odp != '3')
	{
		odp = _getch();
		switch (odp)
		{
		case '1':
			cout << "\n\n\nLista osob:\n";
			for (int i = 0; i < osoba.size(); i++)
			{
				cout << endl;
				cout << "Nazwa: " << osoba[i].imie << endl;
				cout << "Autor: " << osoba[i].nazwisko << endl;
				cout << "Numer tel.: " << osoba[i].numer << endl;
			}
			break;
		case '2':
			cout << "\n\n\n|----DODAWANIE_OSOBY_DO_LISTY-----|";
			cout << "\nPodaj imie: ";
			string odp_imie;
			cin >> odp_imie;
			cout << "Nazwisko: ";
			string odp_nazwisko;
			cin >> odp_nazwisko;
			cout << "Numer tel.: ";
			string odp_numer;
			cin >> odp_numer;
			osoba.push_back(czlowiek(odp_imie, odp_nazwisko, odp_numer));
			cout << "\n<***ZAKONCZONO_Z_SUKCESEM***>";
			break;
		}
	}
	system("pause");
	return 0;
}

czlowiek::czlowiek(string ximie, string xnazwisko, string xnumer)
	: imie(ximie)
	, nazwisko(xnazwisko)
	, numer(xnumer)
{
}