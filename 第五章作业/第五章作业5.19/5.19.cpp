#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double pi=4.0;
	for(int i=2;i<=1000;i++)
	{
		int y, n;
		n = i % 2;
		if (n == 0)
			y = -1;
		else
			y = 1;
		pi += y*(4.0/ (2 * i - 1));
		cout << fixed << setprecision(15) << pi << endl;

	}
	return 0;
}
