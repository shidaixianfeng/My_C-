#include<iostream>
#include"OverNightPackage.h"
#include"Package.h"
#include"TwoDayPackage.h"
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	cout << "which service do you want to choose? enter 1 to choose OverNightPackage" << endl;
	cout << "Enter 2 to choose TwodaysPackage" << endl;
	cout << "Enter 3 to choose average Package" << endl;
	int n = 0;
	cin >> n;
	string a, b, c, d;
	int e;
	string h, i, j, k;
	int m;
	int weight;
	int cost;
	int flatfee = 10;
	if (n == 1)
	{
		cout << "Welcome to choose the OverNightPackage Service and the flatfee is 10 dollors" << endl;//固定价还有每ounce的价格应该是确定的
		cout << "Now input the recipient Stata,city,accuract address,Name,ZIPcode" << endl;

		cin >> a >> b >> c >> d >> e;
		cout << "Now input the Sender Stata,city,accuract address,ZIPcode" << endl;
		cin >> h >> i >> j >> k >> m;
		cout << "Input the package weight" << endl;
		cin >> weight;
		cout << "input the cost of per ounce" << endl;
		cin >> cost;
		if (cost <= 0)
		{
			cout << "it's wrong because the cost of per ounce must be positive,the cost of per ounce will be init 2 dollors" << endl;
			cost = 2;
		}
		OverNightPackage package(flatfee, weight, cost, h, i, j, k, m, a, b, c, d, e);
		cout << package;
	}
	if (n == 2)
	{
		cout << "Welcome to choose the TwoDayPackage Service and the flatfee is 10 dollors of per ounce" << endl;//固定价还有每ounce的价格应该是确定的
		cout << "Now input the recipient Stata,city,accuract address,Name,ZIPcode" << endl;
		cin >> a >> b >> c >> d >> e;
		cout << "Now input the Sender Stata,city,accuract address,ZIPcode" << endl;
		cin >> h >> i >> j >> k >> m;
		cout << "Input the package weight" << endl;

		cin >> weight;

		cout << "input the cost of per ounce" << endl;
		cin >> cost;
		if (cost <= 0)
		{
			cout << "it's wrong because the cost of per ounce must be positive,the cost of per ounce will be init 2 dollors" << endl;
			cost = 2;
		}

		TwoDayPackage package1(flatfee, weight, cost, h, i, j, k, m, a, b, c, d, e);
		cout << package1;
	}
	if(n==3)
	{
		cout << "Welcome to choose the averagePackage Service" << endl;
		cout << "Now input the recipient Stata,city,accuract address,ZIPcode" << endl;
		cin >> a >> b >> c >> d >> e;
		cout << "Now input the Sender Stata,city,accuract address,Name,ZIPcode" << endl;
		cin >> h >> i >> j >> k >> m;
		cout << "Input the package weight" << endl;
		cin >> weight;
		cout << "input the cost of per ounce" << endl;
		cin >> cost;
		if (cost <= 0)
		{
			cout << "it's wrong because the cost of per ounce must be positive,the cost of per ounce will be init 2 dollors" << endl;
			cost = 2;
		}
		Package package2(weight,cost, h, i, j, k, m, a, b, c, d, e);
		cout << package2;
	}
	return 0;
}