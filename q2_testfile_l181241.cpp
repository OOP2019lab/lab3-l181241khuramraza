#include<iostream>
#include"q2_headerfile_l181241.h"
using namespace std;
int main()
{
	Rectangle instance;
	int temp=0;// to get lenght or width
	cout << "Enter lenght of Rectangle" << endl;
	cin >> temp;
	instance.setLenght(temp);
	cout << "Enter width of Rectangle" << endl;
	cin >> temp;
	instance.setWidth(temp);
	int x = instance.getLenght();//x variable to get lenght
	int y = instance.getWidth();//y variable to get width
	int z = instance.getArea();
	cout << "Area of Rectangle is " << z <<endl;
	instance.draw();
	return 0;
}