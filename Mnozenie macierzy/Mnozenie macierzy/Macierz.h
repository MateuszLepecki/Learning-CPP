#pragma once
#include <iostream>

using namespace std;

class Macierz
{
public:
	int ilosc_wierszy;
	int ilosc_kolumn;
	int** matrix;


	Macierz(int w = 0, int k = 0);
	void wprowadz_wymiary();
	void stworz_macierz();
	void zwolnienie_pamieci();
	void wyswietl_macierz();
	void wypelnij();
};