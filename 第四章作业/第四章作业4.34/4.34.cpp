#include<iostream>
using namespace std;
int main()
{	
	int n,i=1,j=1,x;
	double e=0, ex=0, factorial = 1;
	cout << "Enter the number of n and x \n enter n firstly and enter x secondly(enter two -1 quit):\n ";
	while (cin >> n >> x)
	{
		if (n == -1 && x == -1)
			break;
		while (i <= n)
		{
			while (j <= i)
			{
				factorial *= j;
				x *= x;
				j++;
			}
			e += 1 / factorial;
			ex += x / factorial;

			i++;
		}
		cout << "the factorial is:" << factorial << endl;
		cout << "the value of e is:" << e+1 << endl;
		cout << "the value of ex is:" << ex+1 << endl;
	}
	return 0;

}