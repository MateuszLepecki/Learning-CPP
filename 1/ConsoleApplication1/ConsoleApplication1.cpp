// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;


float metry;

float ile_cali(float m);
float ile_yardow(float m);
void ile_mil(float m);

int main()

{
	int liczba_uczniow;
	int liczba_cukierkow;
	int przydzial;
	int liczba_cukierkow_na_pozniej_dla_Jasia;

	cout << "Ilu uczniow jest w klasie" << endl;
	cin >> liczba_uczniow;
	cout << "Ile mama kupila cukierkow" << endl;
	cin >> liczba_cukierkow;
	przydzial = (liczba_cukierkow) / (liczba_uczniow - 1);
	cout << "kazdy uczen dostanie:"<<przydzial << endl;
	liczba_cukierkow_na_pozniej_dla_Jasia = liczba_cukierkow % (liczba_uczniow - 1);
	cout << "Jasio ma na pozniej:" << liczba_cukierkow_na_pozniej_dla_Jasia << endl;
	
	/*
	string PIN;
	
	cout << "witam" << endl<<"podaj nr PIN:"<<endl;
	cin >> PIN;
	
	if (PIN=="1234")
	{
		cout << "poprawny PIN" << endl;
	}
	else
	{
		cout << "bledny PIN" << endl;
	}

*/
	/*
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i << endl;
		Sleep(1000);
		system("cls");
	}
	*/
	/*
	int liczba_powtorzen;
	string imie;

	cout << "podaj imie" << endl;
	cin >> imie;
	cout << "podaj liczbe calkowita" << endl;
	cin >> liczba_powtorzen;

	for (int i = 1; i <= liczba_powtorzen; i++)
	{
		cout << i << "." << imie << endl;
	}
	*/
	/*
	int liczba_bakterii = 1;
	int liczba_godzin=0;

	do
	{
		liczba_bakterii = liczba_bakterii * 2;
		liczba_godzin++;
		cout << "liczba godzin:" << liczba_godzin << endl;
		cout << "liczba bakterii:" << liczba_bakterii << endl;
	} while (liczba_bakterii < 1000000000);

	cout << liczba_godzin << endl;
	*/
	/*
	int liczba;
	int strzal=0;
	int proba=1;
	srand(time(NULL));
	liczba = rand() % 100+1;
	cout << "pomyslalem sobie liczbe z przedzialu 1-100. Zgadnij jaka to liczba." << endl;
	

	while (liczba != strzal)
	{
		cin >> strzal;
		if (strzal > liczba)
		{
			cout << "Za duzo." << endl;
		}
		else if (strzal < liczba)
		{
			cout << "Za malo." << endl;
		}
		else
		{
			cout << "Bingo! Moja liczba to:" << liczba << endl;
		}
		cout << "Numer proby:" << proba << endl;
		proba++;
		
	}
	*/
/*
	int liczba_do_silni;
	int wynik=1;
	cout << "podaj liczbe do policzenia silni"<<endl;
	cin >> liczba_do_silni;

		for (int i = liczba_do_silni; i >=1 ; i--)
		{
			wynik = wynik*i;
			//cout << wynik << endl;
		}

		cout << "wynik to:" << wynik<<endl;

*/		
/*
int liczba_mniejsza=0;
int liczba_wieksza = 1;
int ile_wyswietlic;
int suma=0;
int temp;



cout << "ile wyrazow ciagu chcesz wyswietlic?" << endl;
cin >> ile_wyswietlic;

for (int i = 1; i<=ile_wyswietlic; i++)
{
	cout << liczba_mniejsza << endl;
	temp = liczba_wieksza;
	liczba_wieksza = liczba_wieksza + liczba_mniejsza;
	liczba_mniejsza = temp;
}
*/
/*
int a = 1, b = 2, c = 3;
int* x=&a;

cout << "a wynosi:" <<a << endl;
cout << "b wynosi:" << b << endl;
cout << "c wynosi:" << c << endl;
cout << "x wynosi:" << x << endl;
cout << "*x wynosi:" << *x << endl;
*/
/*
float liczba_1;
float liczba_2;
char wybor;

for (;;)
{
	cout << endl << "liczba 1:";
	cin >> liczba_1;
	cout << endl << "liczba 2:";
	cin >> liczba_2;
	cout << "1. dodwanianie  2. odejmowanie  3.mnozenie  4. dzielenie 5. koniec" << endl;
	cout << endl;

	wybor = getchar();

	switch (wybor)
	{
		case '1':
		{
			cout << "suma: " << liczba_1 + liczba_2 << endl;
		}
		break;
		case '2':
		{
			cout << "roznica: " << liczba_1 - liczba_2 << endl;
		}
		break;
		case '3':
		{
			cout << "iloczyn: " << liczba_1 * liczba_2 << endl;
		}
		break;
		case '4':
		{
			cout << "iloraz: " << liczba_1 / liczba_2 << endl;
		}
		break;
		case '5':
		{
			exit(0);
		}
		break;
		{
		default:
			cout << "nie ma takiej opcji" << endl;
		}
	}
	getchar();
	getchar();
	system("cls");
}
*/
/*
int a;
cin >> a;
if (a == 11)
exit(0);

cout << a;
*/
/*
string imie;
string nazwisko;
string numer;

fstream plik;
plik.open("wizytowka.txt",ios::in);

if (plik.good() == false)
{
	cout << "plik nie istnieje!" << endl;
	exit(0);
}

string linia;
int nr_linii=1;

while (getline(plik, linia))
{
	switch (nr_linii)
	{
	case 1: imie = linia; break;
	case 2: nazwisko = linia; break;
	case 3: numer = linia; break;
	}
	nr_linii++;
}

cout << imie << endl;
cout << nazwisko << endl;
cout << numer << endl;

plik.close();
plik.clear(); 

/*
string fraza;
int dlugosc;
string odwrocona_fraza;
int licznik_odwroconej_frazy = 0;

cout << "podaj fraze do odwrocenia" << endl;
getline(cin, fraza);

dlugosc = fraza.length();
for (int i = dlugosc - 1; i >= 0; i--)
{
	odwrocona_fraza= odwrocona_fraza + fraza[i];
	licznik_odwroconej_frazy++;
}
cout << endl << odwrocona_fraza << endl;
//fraza.insert(8, "moja ");
cout << fraza<<endl;
if (fraza == odwrocona_fraza)
{
	cout << "to jest palindrom" << endl;
}
*/


//cout << "podaj liczbe metrow" << endl;
//cin >> metry;
//cout << "to jest " << ile_cali(metry) <<" cali"<< endl;
//cout << "to jest " << ile_yardow(metry) << " yardow" << endl;
//ile_mil(metry);


system("pause");
	return 0;

}


float ile_cali(float m)
{
	return m*39.37;
}

float ile_yardow(float m)
{
	return m*1.0936;
}

void ile_mil(float m)
{
	cout<< "to jest " <<m*0.00062123 << " mil" << endl;
}