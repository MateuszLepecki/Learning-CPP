#include "stdafx.h"
#include "Macierz.h"

Macierz::Macierz(int w_, int k_)
{
	ilosc_wierszy = w_;
	ilosc_kolumn = k_;
}

void Macierz::wprowadz_wymiary()
{
	cout << "podaj ilosc kolumn" << endl;
	cin >> ilosc_kolumn;
	cout << "podaj ilosc wierszy" << endl;
	cin >> ilosc_wierszy;
}
void Macierz::stworz_macierz()
{
	matrix = new int *[ilosc_wierszy];
	for (int i = 0; i < ilosc_wierszy; i++)
	{
		matrix[i] = new int[ilosc_kolumn];
		for (int j = 0; j < ilosc_kolumn; j++)
			matrix[i][j] = 1;
	}
}

void Macierz::zwolnienie_pamieci()
{
	for (int i = 0; i < ilosc_wierszy; i++)
	{
		delete[]matrix[i];
	}
	delete[] * matrix;
}

void Macierz::wyswietl_macierz()
{
	for (int i = 0; i < ilosc_wierszy; i++)
	{
		for (int j = 0; j < ilosc_kolumn; j++)
		{
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}

}

void Macierz::wypelnij()
{
	for (int i = 0; i < ilosc_wierszy; i++)
	{

		for (int j = 0; j < ilosc_kolumn; j++)
		{
			matrix[i][j]=2;
		}
	}
}
