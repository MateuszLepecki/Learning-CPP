#pragma once
#include <iostream>

using namespace std;

class Pytanie
{
public:
	string tresc;
	string a, b, c, d;
	int nr_pytania;
	string poprawna;
	string odpowiedz_uzytkownika;
	int punkt;

	void wczytaj();		//wczytuje pytania z pliku
	void zadaj_pytanie();	//zadaje pytanie uzytkownikowi
	void sprawdz();			//sprawdza poprawnosc odpowiedzi

};