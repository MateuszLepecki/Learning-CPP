// Programowanie obiektowe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Zwierze
{
	public:

	//atrybuty
	string gatunek;
	string imie;
	int wiek;
	//procedury
	void dodaj_zwierze()
	{
		cout << "dodawanie nowego zwierzecia do bazy" << endl;
		cout << "podaj gatunek" << endl;
		cin >> gatunek;
		cout << "podaj imie" << endl;
		cin >> imie;
		cout << "podaj wiek" << endl;
		cin >> wiek;
	}
	void daj_glos()
	{
		if (gatunek == "kot")cout << imie << " lat" << wiek << " Miau!" << endl;
		else if (gatunek == "koza")cout << imie << " lat" << wiek << " Meee!" << endl;
		else if (gatunek == "krowa")cout << imie << " lat" << wiek << " Muuu!" << endl;
		else cout << "nieznany gatunek" << endl;
	}
};

int main()
{
	Zwierze z1;
	z1.dodaj_zwierze();
	z1.daj_glos();



	Zwierze z2;

	system("pause");
    return 0;
}

