#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter a number to represent the range to search the prime: ";
	cin >>n;
	int *ptr = new int [n+1];
	for (int i = 0; i < n+1; i++)
		ptr[i] = 1;
	ptr[0] = 0;
	ptr[1] = 0;
	for(int i=2;i<n+1;i++)
	{
		if(ptr[i]==1)
		{
		for (int j = 2; j*i<n+1; j++)
			ptr[j*i] = 0;
		}
	}
	for (int i = 1; i < n+1; i++)
		if (ptr[i] == 1)
			cout << i << "  ";

	return 0;
}