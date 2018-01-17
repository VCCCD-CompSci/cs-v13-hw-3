#include "stdafx.h"
#include <iostream>
#include <string>
#include "square.h"

using namespace std;

square::square()
{
	size = 5;
}

square::square(int _size)
{
	size = _size;
}

void square::Display()
{
	for (int i = 0; i < size; i++)
	{
		int horizontal = size;
		while (horizontal > 0)
		{
			cout << "*";
			horizontal--;
		}

		cout << "\n";
	}	
}

square::~square()
{
}
