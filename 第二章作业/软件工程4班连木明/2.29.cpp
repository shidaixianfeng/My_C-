#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << left;
	cout<<setw(10) << "integer" << setw(10)<< "square" << setw(10) << "cube" << endl;
	for(int i=0;i<=10;i++)
	{
		cout <<setw(10)<< i << setw(10) << i*i << setw(10) << i*i*i << endl;
	}
	return 0;
}