#include "stdafx.h"
#include <iostream>
#include <string>
#include "circle.h"

using namespace std;

circle::circle()
{
	radius = 5;
}

circle::circle(int _radius)
{
	radius = _radius;
}

void circle::Display()
{
	for (int i = 0; i < radius - 1; i++)
	{
		int space = radius;

		while (space > 0)
		{
			cout << " ";
			space--;
		}

		cout << "*\n";
	}

	for (int i = 0; i < radius * 2; i++)
	{
		if (i == radius)
		{
			cout << " *";
		}
		else
		{
			cout << "*";
		}		
	}
	cout << "\n";

	for (int i = 0; i < radius - 1; i++)
	{
		int space = radius;

		while (space > 0)
		{
			cout << " ";
			space--;
		}

		cout << "*\n";
	}
}

circle::~circle()
{
}
