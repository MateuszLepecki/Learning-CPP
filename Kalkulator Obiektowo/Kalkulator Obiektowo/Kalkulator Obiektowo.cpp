// Kalkulator Obiektowo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dzialania.h"
#include <iostream>

int main()
{
	CDzialania kalkulator;
	kalkulator.wpisz_skladniki();

	
	kalkulator.pokaz_wynik(kalkulator.dodawanie());

	kalkulator.pokaz_wynik(kalkulator.odejmowanie());

	kalkulator.pokaz_wynik(kalkulator.mnozenie());

	kalkulator.pokaz_wynik(kalkulator.dzielenie());
	
	system("pause");
    return 0;
}

