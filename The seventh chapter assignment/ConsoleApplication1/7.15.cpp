#include <iostream>
using namespace std;

int main()
{
	int a[20];
	int j = 0;
	bool fl;
	for (int i = 0; i < 20; i++) {
		fl = true;
		cin >> a[j];
		for (int k = 0; k < j; k++) {
			if (a[k] == a[j]) {
				fl = false;
				break;
			}
		}
		if (fl)
			j++;
	}
	for (int i = 0; i < j; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}