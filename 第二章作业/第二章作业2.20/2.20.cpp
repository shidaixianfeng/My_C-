#include<iostream>
using namespace std;
int main()
{
	int radius, diameter;
	double const pi = 3.14159;
	cout << "please enter the radius \n";
	cin >> radius;
	diameter = 2 * radius;
	double circumference, area;
	circumference = 2 * pi*radius;
	area = pi*radius*radius;
	cout << "The diameter is " << diameter << endl;
	cout << "The circumference is " << circumference << endl;
	cout << "The area is " << area << endl;
	return 0;

}