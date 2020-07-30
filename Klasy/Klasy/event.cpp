// Klasy.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "event.h"



using namespace std;

Event::Event(string n, int d, int m, int y, int h, int mins)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mins;
}
Event::~Event()
{
	cout << "to ja, destruktor" << endl;
}
void Event::load()
{
	cout << "podaj nazwe"<< endl;
	cin >> name;
	cout << "podaj dzien" << endl;
	cin >> day;
	cout << "podaj miesiac" << endl;
	cin >> month;
	cout << "podaj rok" << endl;
	cin >> year;
	cout << "podaj godzina" << endl;
	cin >> hour;
	cout << "podaj minuty" << endl;
	cin >> minutes;
}

void Event::show()
{
	cout << endl << name << " " << day << "." << month << "." << year << " " << hour << ":" << minutes << endl;
}