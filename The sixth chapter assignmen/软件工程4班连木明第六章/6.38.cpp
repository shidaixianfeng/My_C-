#include<iostream>
using namespace std;
int hanoi(int n, char a, char b, char c);
int main()
{
	int n;
	cout << "Enter a number to show the number of the plates(-1 to quit): " << endl;
	cout << "enter three charcter to represent three pegs,and the plates";
	cout<<" will be moved from the first peg to the third peg: ";
	cout << endl;
	while (cin >> n)
	{
		if (n == -1)
			break;
		
			char a, b, c;
			cin >> a>> b >> c;
			hanoi(n, a, b, c);
	}
	return 0;
}
int hanoi(int n,char a,char b ,char c)
{
	if (n <= 0)
		return 0;
	hanoi(n - 1, a, c, b);
	cout << a << "-->" << c << endl;
	hanoi(n - 1, b, a, c);

}