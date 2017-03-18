#include <iostream> 
using namespace std;
int a[1000];
void prime(int x,int a[],int arraysize)
{
	if (x == 100)
		return;
	else
	{
		for (int i = x+1; i < 1000; i++)
		{
			if (i%x == 0)
				a[i] = 0;
		}
		int c;
		for (x; x < 100; x++)
		{
			 c = x + 1;
			 if (a[c] == 1)
				 break;
		}
		prime(c, a, 1000);

	}

}

int main()
{
	for (int i = 0; i<1000; i++)
	{
		a[i] = 1;
	
	}
	
	prime(2,a,1000);
	for (int b = 2; b<1000; b++)
	{
		if (a[b] == 1)
			cout << b << endl;
	}
	system("pause");

}

