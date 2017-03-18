#include<iostream>
using namespace std;
int main()
{
	int input,condition=1;
	while(condition==1)
	{
		cout << "Input the valid number: ";
		cin >> input;
		if (input == 1 || input == 2)
			break;
	}
	return 0;
}