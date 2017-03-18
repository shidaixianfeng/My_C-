#include<iostream>
using namespace std;
int recursion(int x, int y);
int main()
{
	int x, y,GCD;
	cout << "Please enter two numbers: ";
	cin >> x >> y;
	cout << "the GCD is: ";
	GCD=recursion(x,y);
	cout << GCD << endl;
	return 0;
}
int recursion(int x,int y)
{
	if(x>=y)
	{
		int mod = x%y;
		if (mod == 0)
			return y;
		x = y;
		y = mod;
		recursion(x, y);
}

}