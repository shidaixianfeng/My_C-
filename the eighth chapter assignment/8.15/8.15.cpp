#include<iostream>
#include<algorithm>
using namespace std;
void quicksort(int *&ptr,int left,int right);
int main()
{
	int  n;
	cout << "Enter a number to represent how many numbers do you want to sort: " << endl;
	cin >> n;
	int *parray = new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> parray[i];
	}
	quicksort(parray, 0,n );
	for (int i = 0; i < n; i++)
		cout << parray[i] << "  ";
	return 0;
}
void quicksort(int *&ptr,int left ,int right)
{
	int flagl = left;
	int flagr = right;
	int x=ptr[left];
	for (int k = 0;; k++)
	{
		int condition = 0;
		for (int i = flagr-1; i > flagl; i--)
			if (ptr[i] <= ptr[flagl])
			{
				swap(ptr[i], ptr[flagl]);
				flagr = i;
				condition = 1;
				break;
			}
		for (int j = flagl+1; j < flagr; j++)
			if (ptr[j] >= ptr[flagr])
			{
				swap(ptr[j],ptr[flagr]);
				flagl = j;
				condition = 1;
				break;
			}
		if (condition == 0)
			break;
	}
	return;
	}



