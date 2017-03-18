#include<iostream>
using namespace std;
int main()
{
	int number,sum=0;
	cout << "Input the Binary number(only 0s and 1s): ";
	cin >> number;
	for(int i=1;number>0 ;i++)
	{
		int x = 1, y = 1,z=0;
		for (int j = 1; j <= i; j++)
			x *= 10;
		z =( number % x)*10/x;
		cout << z << endl;
		if (z!= 0 && z!= 1)
		{
			cout << "you enter the illeagal number,only permit 0s and 1s";
			break;
		}
		
		number = number -z*( x / 10);
		for (int j = 1; j <= i - 1; j++)
			y *= 2;
			sum += z*y;
	}
	cout << sum;
	return 0;
}