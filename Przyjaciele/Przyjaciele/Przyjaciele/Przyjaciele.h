#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class CProstokat;

class CPunkt
{
	string nazwa;
	float x, y;

public:
	CPunkt(string = "A", float = 0, float = 0);
	void wczytaj();
	friend void sedzia(CPunkt pkt, CProstokat prost);
};

class CProstokat
{
	string nazwa;
	float x, y, szer, wys;

public:
	CProstokat(string = "brak", float = 0, float = 0, float = 1, float = 1);
	void wczytaj();
	friend void sedzia(CPunkt pkt, CProstokat prost);
};