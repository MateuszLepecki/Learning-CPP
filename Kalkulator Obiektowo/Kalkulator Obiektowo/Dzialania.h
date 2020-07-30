#pragma once
#include <iostream>

using namespace std;

class CDzialania
{
	float skladnik1, skladnik2;
	float wynik;
public:
	CDzialania(float=10, float=0);
	void wpisz_skladniki();
	int dodawanie();
	int odejmowanie();
	int mnozenie();
	int dzielenie();
	void pokaz_wynik(int test);
};