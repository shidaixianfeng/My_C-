#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip();
int main()
{
	srand(time(0));
	int positiveface=0, negativeface=0;
	for(int i=1;i<=100;i++)
	{
		int x = flip();
		if (x == 1)
			++positiveface;
		if (x == 0)
			++negativeface;
	}
	cout << "heads times are :" << positiveface << endl;
	cout << "tail times are :" << negativeface << endl;
	return 0;
}
int flip()
{
	int x;
	x = rand() % 2;
	if (x == 1)
		return 1;
	else
		return 0;
}