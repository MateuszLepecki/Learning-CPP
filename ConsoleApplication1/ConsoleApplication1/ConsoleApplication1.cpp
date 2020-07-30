// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "windows.h"

using namespace std;

int zamiana(int *a, int *b);
int znajdz_najwieksza(int *tab, int dlugosc_tablicy);
int test=1;
int liczba_zmian=0;
int wielkosc_tablicy=1;
int*wskaznik;

//sortowanie babelkowe
int main()
{
	cout << "ile ma byc liczb? " << endl;
	cin >> wielkosc_tablicy;

	int *tablica = new int[wielkosc_tablicy];

	srand(time(NULL));
	for (int i = 0; i < wielkosc_tablicy; i++)
	{
		tablica[i] = rand() % 1000+1;
	//	cout << tablica[i] << endl;
	}
	while (test>0)
	{
		test = 0;
		wskaznik = tablica;//wskazuje adres poczatku tablicy
		for (int i = 0; i < (wielkosc_tablicy-1); i++)
		{
			test += zamiana(wskaznik,wskaznik+1);
			liczba_zmian++;
			wskaznik++;
		}
		cout <<"test wynosi: "<<test << endl;
	}
	//wyswietlenie zmienionej tablicy
	for (int i = 0; i < wielkosc_tablicy; i++)
	{
		cout << tablica[i] << endl;
	}
	cout << "liczba zmian: " << liczba_zmian << endl;
	cout << endl << endl << endl << "najwieksza to: " << znajdz_najwieksza(tablica, wielkosc_tablicy) << endl;

	system("pause");
	return 0;

}

int zamiana(int* a, int* b)
{
	if (*a > *b)
	{
		int tymczasowy;
		tymczasowy = *a;
		*a = *b;
		*b= tymczasowy;
		//cout <<*a<< endl;
		//cout << *b << endl;
		//cout << "byla zmiana" << endl;
		return 1;
	}
	else
	{
	//	cout << "nie bylo zmiany" << endl;
		return 0;
	}
}

int znajdz_najwieksza(int *tab,int dlugosc_tablicy)
{
	int najwieksza=0;
	for (int i = 0; i < dlugosc_tablicy; i++)
	{
		if (*tab > najwieksza)
		{
			najwieksza = *tab;
			cout << najwieksza << endl;
		}
		tab++;
		
	}
	return najwieksza;
}