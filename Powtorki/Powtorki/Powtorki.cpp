// Powtorki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>


using namespace std;
int silnia(int z_jakiej_liczby);
long int fibonacci(int ile);
int podstawa_silni;
int ile_fib;

int main()
{
	//rekurencja silnia
	cout << "podaj z jakiej liczby wyliczyc silnie" << endl;
	cin >> podstawa_silni;
	cout << silnia(podstawa_silni) << endl;

	cout << "ktory wyraz ciagu fibonacciego wyswietlic" << endl;
	cin>> ile_fib;
	cout << fibonacci(ile_fib) << endl;
	

	//cout << M_PI << endl;



	system("pause");
    return 0;
}

int silnia(int z_jakiej_liczby)
{
	if (z_jakiej_liczby == 1) return 1;
	else if (z_jakiej_liczby <= 0) cout << "bład - wprowadzona liczba nie jest dodatnia\n";
	else return z_jakiej_liczby*silnia(z_jakiej_liczby - 1);
}

long int fibonacci(int ile)
{
	if (ile == 1||ile==2) return 1;
	else return fibonacci(ile - 2) + fibonacci(ile - 1);
}