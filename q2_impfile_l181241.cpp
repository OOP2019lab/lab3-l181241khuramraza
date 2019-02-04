#include<iostream>
#include"q2_headerfile_l181241.h"
using namespace std;

int Rectangle::getLenght()
{
	if (lenght > 0)
		return lenght;
	else
	{
		lenght = 0;
		return lenght;
	}
}

int Rectangle::getWidth()
{
	if (width > 0)
		return width;
	else
	{
		width = 0;
		return width;
	}
}

void Rectangle::setLenght(int l)
{
	lenght = l;
}

void Rectangle::setWidth(int w)
{
	width = w;
}

int Rectangle::getArea()
{
	return (lenght*width);
}

void Rectangle::rotateRectangle()
{
	int temp = 0;
	temp = lenght;
	lenght = width;
	width = temp;
}

void Rectangle::draw()
{
	for (int i = 0; i < lenght; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}