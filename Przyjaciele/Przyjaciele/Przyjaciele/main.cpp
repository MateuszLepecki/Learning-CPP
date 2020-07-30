// Przyjaciele.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Przyjaciele.h"

void sedzia(CPunkt pkt, CProstokat prost);


int main()
{

	CPunkt pkt1("A",3,18);
	CProstokat prostokat("prostokat", 0, 0, 6, 4);

	sedzia(pkt1, prostokat);

	CPunkt pkt2;
	pkt2.wczytaj();

	CProstokat prost2;
	prost2.wczytaj();

	sedzia(pkt2, prost2);
	system("pause");
    return 0;
}

void sedzia(CPunkt pkt, CProstokat prost)
{
	if ((pkt.x >= prost.x) && (pkt.x <= (prost.x + prost.szer)) && (pkt.y >= prost.y) && (pkt.y <= (prost.y + prost.wys)))
	{
		cout << "punkt lezy wewnatrz prostokata" << endl;
	}
	else cout << "punkt lezy na zewnatrz prostokata" << endl;
}