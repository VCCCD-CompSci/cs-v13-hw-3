// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "circle.h"
#include "square.h"
#include "triangle.h"

using namespace std;

int main()
{
	cout << "Square:\n";
	square MySquare1(4);
	MySquare1.Display();
	cout << "\n\n\n";

	cout << "Triangle:\n";
	triangle MyTriangle1(6);
	MyTriangle1.Display();
	cout << "\n\n\n";

	cout << "Circle:\n";
	circle MyCircle1(5);
	MyCircle1.Display();
	cout << "\n\n\n";

    return 0;
}

