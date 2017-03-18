#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
	Rectangle rec1;
	cout << "enter a width" << endl;
	float width;
	cin >> width;
	rec1.setWidth(width);
	cout << "enter a length" << endl;
	float length;
	cin >> length;
	rec1.setLenth(length);
	rec1.CalculateArea();
	rec1.CalculatePerimeter();
	return 0;
}