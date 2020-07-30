// Mnozenie macierzy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Macierz.h"

void mnozenie_macierzy(Macierz m1, Macierz m2);

int main()
{
	Macierz macierz;
	macierz.wprowadz_wymiary();
	macierz.stworz_macierz();
	macierz.wypelnij();
	macierz.wyswietl_macierz();

	Macierz macierz1;
	macierz1.wprowadz_wymiary();
	macierz1.stworz_macierz();
	macierz1.wypelnij();
	macierz1.wyswietl_macierz();

	mnozenie_macierzy(macierz, macierz1);

	system("pause");
    return 0;
}

void mnozenie_macierzy(Macierz m1, Macierz m2)
{
	if ((m1.ilosc_kolumn == m2.ilosc_wierszy))
	{
		Macierz m_wynikowa;
		m_wynikowa.ilosc_wierszy = m1.ilosc_wierszy;
		m_wynikowa.ilosc_kolumn = m2.ilosc_kolumn;
		m_wynikowa.stworz_macierz();

		for (int i = 0; i < m_wynikowa.ilosc_wierszy; i++)
		{

			for (int j = 0; j < m_wynikowa.ilosc_kolumn; j++)
			{
				m_wynikowa.matrix[i][j] = m1.matrix[i][j] * m2.matrix[j][i];///Zle
			}
		}

		cout << "WYNIK:" << endl;
		m_wynikowa.wyswietl_macierz();

	}
	else cout << "nie mozna pomnozyc macierzy o takich wymiarach!!!" << endl;

}