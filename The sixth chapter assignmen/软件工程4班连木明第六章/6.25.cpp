#include<iostream>
using namespace std;
int main()
{
	int hour, minute, second;
	cout << "enter three integer to show the time;enter two times" << endl;
	int totalseconds1, totalseconds2;
	for (int i = 1; i <= 2; i++)
	{
		cin >> hour >> minute >> second;
		if(hour>12||minute>=60||second>=60)
		{
			cout << "the time you enter is wrong and please enter again " << endl;
			--i;
			continue;
		}
		if (i == 1)
		{
			totalseconds1 = hour * 60 * 60 + minute * 60 + second;
			cout << "the total seconds are: " << totalseconds1 << endl;
		}
		else
		{totalseconds2 = hour * 60 * 60 + minute * 60 + second;
		cout << "the total seconds are: " << totalseconds2 << endl;
		}
	}


	cout << "the amount of seconds between two time are: " << totalseconds1 - totalseconds2 << endl;
	return 0;

}
