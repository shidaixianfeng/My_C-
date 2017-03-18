#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
int rolldice();
int main()
{
	int sum[13] = { 0 };
	srand(time(0));
	for (int i = 1; i <= 36000; i++)
		++sum[rolldice()];
	
	for (int i = 2; i <= 12; i++)
	{
		double x = sum[i] / 36000.0;
		cout << i << "  " << sum[i] << "   " << fixed<<setprecision(3)<<x << endl;
	}
	return 0;
}
int rolldice()
{
	int a = 1 + rand() % 6;
	int b = 1 + rand() % 6;
	return a + b;
}
