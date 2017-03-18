#include<iostream>
using namespace std;
int main()
{
	for (int i = 1;i<=500;i++)
	{
		for (int j = i;j<=500;j++)
		{
			for (int z = j;z<=500;z++)
			{
				if (z*z == i*i + j*j)
					cout << i << "  " << j << "  " << z << endl;
			}
		}
	}
	return 0;
}