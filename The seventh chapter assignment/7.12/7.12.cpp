#include<iostream>
using namespace std;
int main()
{
	int array[11];
	cout << "Enter ten numbers" << endl;
	for (int i = 1; i <= 10; i++)
		cin >> array[i];
	for(int i=1;i<=9;i++)
	{
		for (int j = 1; j <= 10 - i; j++)
		{
			int x = 0;
			if (array[j] > array[j + 1])
				x = array[j];
			array[j] = array[j+1];
			array[j + 1] = x;
		}

	}
	for (int i = 1; i <= 10; i++)
		cout << array[i] << "   ";
	return 0;
}