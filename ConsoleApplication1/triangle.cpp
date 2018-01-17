#include "stdafx.h"
#include <iostream>
#include <string>
#include "triangle.h"

using namespace std;

triangle::triangle()
{
	length = 5;
}

triangle::triangle(int _length)
{
	length = _length;
}

void triangle::Display()
{
	for (int i = 0; i < length - 1; i++)
	{
		if (i == 0)
		{
			cout << "*\n";
		}
		else
		{
			int spacing = i - 1;
			cout << "*";
			while (spacing != 0)
			{
				cout << "*";
				spacing--;
			}
			cout << "*\n";
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << "*";
	}
	cout << "\n";
}

triangle::~triangle()
{
}
