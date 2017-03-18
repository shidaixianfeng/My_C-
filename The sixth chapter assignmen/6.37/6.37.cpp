#include<iostream>
using namespace std;
int main()
{
	int array[1000];
	array[0] = 0;
	array[1] = 1;
	cout << "the type is int " << endl;
	cout << array[0] << endl;
	cout << array[1] << endl;
	for (int i = 2;;i++)
	{
		array[i] = array[i - 1] + array[i - 2];
		if (array[i] < 0)
			break;
		cout << array[i] << endl;
		
	}
	return 0;
}