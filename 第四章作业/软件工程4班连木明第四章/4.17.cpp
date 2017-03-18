#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int counter = 1;
	double  arr[10];
	while(counter<=10)
	{
		cout << counter<<"		";
		cin >> arr[counter - 1];
		++counter;
		if (counter > 10)
			break;
	
	}
	sort(arr, arr + 10);
	cout << "The largest: " << arr[9];
	return 0;
}