#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10][10];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			b[i][j] = 10;
	cout << "enter 10 number to sort: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	int mod = 1;
	for (int m = 1; m <= 10; m++)
	{
		mod *= 10;
		for (int i = 0; i < 10; i++)
		{
			int temp = 0;
			temp = ((a[i] - a[i] % (mod / 10)) % mod)*10/mod;
			for (int j = 0; j < 10; j++)
			{
				if (b[temp][j] == 10)
				{
					b[temp][j] = a[i];
					break;
				}
			}
		}

		for (int k = 0; k < 10; k++)
			for (int i = 0; i < 10; i++)
			{
				int flag = 1;
				for (int j = 0; j < 10; j++)
				{
					if (b[i][j] != 10)
					{
						a[k] = b[i][j];
						b[i][j] = 10;
						flag = 0;
						break;
					}
				}
				if (flag == 0)
					break;
			}
		int counter = 0;
		for (int i = 0; i < 10; i++)
		{
			int x = a[i] / mod;
			if (x == 0)
				counter++;
		}
		if (counter == 10)
			break;
		}
	for (int i = 0; i < 10; i++)
		cout << a[i] << "  " ;
	return 0;
}

