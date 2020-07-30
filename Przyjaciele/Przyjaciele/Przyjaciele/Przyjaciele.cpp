#include "stdafx.h"
#include <iostream>
#include <string>
#include "Przyjaciele.h"

using namespace std;

CPunkt::CPunkt(string n, float xx, float yy)
{
	nazwa = n;
	x = xx;
	y = yy;
}
void CPunkt::wczytaj()
{
	cout << "podaj nazwe punktu" << endl;
	cin >> nazwa;
	cout << "podaj x" << endl;
	cin >> x;
	cout << "podaj y" << endl;
	cin >> y;
}

CProstokat::CProstokat(string n, float x1, float y1, float szer1, float wys1)
{
	nazwa = n;
	x = x1;
	y = y1;
	szer = szer1;
	wys = wys1;

}

void CProstokat::wczytaj()
{
	cout << "podaj nazwe prostokata" << endl;
	cin >> nazwa;
	cout << "podaj x naroznika" << endl;
	cin >> x;
	cout << "podaj y naroznika" << endl;
	cin >> y;
	cout << "podaj szerokosc prostokata" << endl;
	cin >> szer;
	cout << "podaj wys prostokata" << endl;
	cin >> wys;
}