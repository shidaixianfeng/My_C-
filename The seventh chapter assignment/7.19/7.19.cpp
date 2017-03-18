#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
void rolldice();
int main()
{
	srand(time(0));
	for (int i = 1; i <= 36; i++)
		rolldice();
		return 0;
}
void rolldice()
{
	int a = 1 + rand() % 6;
	int b = 1 + rand() % 6;
	cout << a << endl;
	cout << b << endl;
}
