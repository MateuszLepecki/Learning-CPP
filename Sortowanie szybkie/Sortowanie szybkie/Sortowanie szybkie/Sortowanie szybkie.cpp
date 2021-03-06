// Sortowanie szybkie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <time.h>

using namespace std;

vector <int> tworzenie_vectora(int ile_liczb);
void wyswietlenie_wektora(vector <int> vek);
void sorotwanie_szybkie(vector <int> &vek,int p,int q);

int main()
{
	int ile;//ilosc liczb w wektorze
	cout << "ile liczb chcesz w wektorze\n";
	cin >> ile;
	vector <int> sortowana_lista;
	int left, right;
	sortowana_lista=tworzenie_vectora(ile);
	wyswietlenie_wektora(sortowana_lista);
	left = 0;
	right = sortowana_lista.size() - 1;
	sorotwanie_szybkie(sortowana_lista,left,right);
	wyswietlenie_wektora(sortowana_lista);

	system("pause");
    return 0;
}

vector <int> tworzenie_vectora(int ile_liczb)
{
	vector <int> lista;

	srand(time(NULL));
	for (int i=0; i < ile_liczb; i++)
	{
		lista.push_back(rand() % 1000+1);
	}
	return lista;
}

void wyswietlenie_wektora(vector <int> vek)
{
	for (vector<int>::iterator it = vek.begin(); it != vek.end(); it++)//for (auto &v=vek)
	{
		cout << *it << endl;
	}
	cout << endl;
}

void sorotwanie_szybkie(vector <int>  &vek, int p, int q)
{
	if (p < q)
	{
		cout << "jestem w sortowaniu" << endl;
		int r;
		int p_ = p;
		int q_ = q;
		r = (p_+q_)/2;
		
		do
		{
			while (vek[p_] < vek[r])
				p_++;
			//system("pause");
			while (vek[q_] > vek[r])
				q_--;
			if (p_<=q_)
			{
				int temp;
				temp = vek[p_];
				vek[p_] = vek[q_];
				vek[q_] = temp;
				p_++;
				q_--;
				cout << "test" << endl;
			}
			cout << "p_ wynosi: " << p_ << endl;
			cout << "r wynosi: " << r << endl;
		} while (p_ < r);


	if(p<q_)	sorotwanie_szybkie(vek, p, q_);
	if (q>p_)sorotwanie_szybkie(vek, p_, q);

	}
	


}