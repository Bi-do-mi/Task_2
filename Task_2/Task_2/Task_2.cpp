#include "stdafx.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Пожалуйста, введите целое число - размер вектора." << endl;
	int sz = 0;
	vector<pair<int, int>> pvec;
	vector<int> vec;
	while (cin >> sz)
	{
		pvec.clear();
		vec.clear();
		cin.clear();
		while (cin.get() != '\n');
		int div = 0;
		cout << "Пожалуйста, введите целое число - делитель, которое"
			" должно быть меньше " << sz << "." << endl;
		cin >> div;
		cin.clear();
		while (cin.get() != '\n');
		for (int i = 0; i < sz; ++i)
		{
			vec.push_back(i + 1);
		}
		int s = sz / div;
		int beg_interv = 0;
		if (sz%div)
			beg_interv = (sz - (s*div)) / 2;
		for (int i = 0; i < div; ++i)
		{
			pair<int, int> pr(beg_interv, beg_interv + s - 1);
			pvec.push_back(pr);
			beg_interv += s;
		}
		for (auto a : pvec)
		{
			cout << a.first << ", " << a.second << endl;
		}
		cout << "Пожалуйста, введите целое число - размер вектора." << endl;
	}

	return 0;
}

