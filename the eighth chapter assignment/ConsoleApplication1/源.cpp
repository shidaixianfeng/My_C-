#include<iostream>
using namespace std;
void InsertionSort(int b[], int arraysize)
{
	for (int i = 1; i<6; i++)
	{
		int linshi = b[i];
		int moveitem = i;
		while (moveitem>0 && b[moveitem - 1]>linshi)
		{
			b[moveitem] = b[moveitem - 1];
			moveitem--;
		}
		b[moveitem] = linshi;
	}
}
int main()
{
	int my_select;
	cout << "输入1按降序，输入其它值按升序";
	cin >> my_select;
	int a[6] = { 53, 37, 98, 189,25, 21 };
	InsertionSort(a, 6);
	if (my_select == 1)
	{
		for (int i = 5; i >= 0; i--)
			cout << a[i] << "  ";
	}
	else
		for (int i = 0; i < 6; i++)
			cout << a[i] << "  ";
	return 0;

}