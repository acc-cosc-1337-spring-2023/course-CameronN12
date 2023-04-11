//main
#include <iostream>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	const int SIZE = 3;
	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Line lines[SIZE];
	for(auto line: lines)
	{
		line.draw();
	}

	Shape* shape = circles;
	shape->draw();

	shape = lines;
	shape->draw();

	return 0;
}