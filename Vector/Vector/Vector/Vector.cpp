// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <array>


using namespace std;
/*
class CCzlowiek
{
public:
	CCzlowiek(string ximie, string xnazwisko, int xwiek);
	string imie;
	string nazwisko;
	int wiek;

};


int main()
{
	vector <CCzlowiek> osoba;
	cout << "podaj imie" << endl;
	string dod_imie;
	cin >> dod_imie;
	cout << "podaj nazwisko" << endl;
	string dod_nazwisko;
	cin >> dod_nazwisko;
	cout << "podaj wiek" << endl;
	int dod_wiek;
	cin >> dod_wiek;

	osoba.push_back(CCzlowiek(dod_imie, dod_nazwisko, dod_wiek));

	cout << osoba[0].imie << endl;
	cout << osoba[0].nazwisko << endl;
	cout << osoba[0].wiek << endl;

	vector <int> lista;

	lista.push_back(1);
	lista.push_back(2);

	cout << *lista.begin();


	system("pause");
    return 0;
}

CCzlowiek::CCzlowiek(string ximie, string xnazwisko, int xwiek)
{
	imie = ximie;
	nazwisko = xnazwisko;
	wiek = xwiek;
}
*/

/*
int main()
{
	vector <int> lista;
	srand(time(NULL));
	int ile;
	int dolna_gr;
	int gorna_gr;


	cout << "ile chcesz liczb losowych?" << endl;
	cin >> ile;
	cout << "dolna granica  zakresu?" << endl;
	cin >> dolna_gr;
	cout << "gorna granica  zakresu?" << endl;
	cin >> gorna_gr;

	

	for (int i=0; i < ile; i++)
	{
		lista.push_back(rand() % (gorna_gr - dolna_gr+1) + dolna_gr);
	}


	for (int i=0; i < lista.size(); i++)
		cout << i+1<<". "<<lista[i] << endl;

	system("pause");
	return 0;
}
*/
/*
int main()
{
	vector < int > tab;
	srand(time(NULL));
	for (int i = 0; i < 12; i++)
		tab.push_back(rand() % 100);

	sort(tab.begin(), tab.end());
	//odczytywanie
	cout << "Pojemnik przed edycja: \n";
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] << std::endl;
	//pop_back
	tab.pop_back();
	cout << "\nPojemnik po wywolaniu funkcji pop_back: \n";
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] << std::endl;
	//resize
	tab.resize(8);
	cout << "\nPojemnik po wywolaniu funkcji resize: \n";
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] << std::endl;
	//erase
	cout << "\nTrzeci element tablicy przed erase: " << tab[2] << "\n";
	tab.erase(tab.begin()+2);
	cout << "Trzeci element tablicy po erase: " << tab[2] << "\n";
	//erase cdn.
	cout << "\nTablica przed erase z dwoma parametrami:\n";
	for (int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;

	tab.erase(tab.begin() + 1, tab.begin() + 4);
	cout << tab.size();
	cout << "\nTablica po erase z dwoma parametrami:\n";
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] << std::endl;
	//clear
	tab.clear();
	cout << "\nZawartosc pojemnika po clear: \n";
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] << std::endl;

	system("pause");

	return 0;
}
*/

/*
int main() {
	//deklaracja z wykorzystaniem agregacji
	vector <int> lista;

	int i=0;
	for (; i < 10; i++)
	{
		lista.push_back(i);
	}

	vector<int>::iterator iter = lista.begin();
	for (iter ;iter!=lista.end(); iter++)
	{
		cout << *iter<<endl;
	}

	system("pause");
	return 0;
}
*/

#include <array>
#include <iostream>

int main()
{
	std::array<int, 10> a = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	std::array<char, 13> b;

	//wyświetlmy sobie wszystkie wartości naszego arraya przy użyciu range-based for'a
	for (auto &v : a)
	{
		std::cout << v << "\n";
		
	}



	system("pause");
	return 0;
}