#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "windows.h"

using namespace std;



int main()
{
	int tablica[100];
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		tablica[i]= rand() % 1000;
		cout << tablica[i] << endl;
	}
	 
	system("pause");
	return 0;

}