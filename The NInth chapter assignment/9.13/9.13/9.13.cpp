#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
	float b[8];
	cout << "Enter 8 number to replace the coordinate like 1,1  ,1,3,  3,1,  3,3" << endl;
	for (int i = 0; i < 8; i++)
		cin >> b[i];
	Rectangle A(b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7]);
	cout<<"the length is: "<<A.getLength()<<endl;
	cout<<"the width: "<<A.getWidth()<<endl;
	cout <<"the arer: "<< A.Calculate_area() << endl;
	cout<<"the perimeter: "<<A.Calculate_perimeter()<<endl;
	cout <<"is it a square:  "<< A.is_square() << endl;
	A.setFillCharacter();
	return 0;
}