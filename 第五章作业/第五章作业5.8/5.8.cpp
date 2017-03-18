#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int numbercounter, number, smallest = INT_MAX;
	cout << "input a number to specifies the number of values remaining: \n";
	cin >> numbercounter;
	for (int i = 1; i <= numbercounter; i++)
	{
		cin >> number;
		smallest = smallest > number ? number : smallest;
	}
	cout << "tne smllest is: " << smallest;
	return 0;
}