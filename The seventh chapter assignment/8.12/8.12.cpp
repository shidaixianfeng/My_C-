#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int strategyoftortise(int *a);
int strategyofhare(int *b);
int main()
{
	srand(time(0));
	int strtegytor = rand() % 10;
	int  placeoftor = 1;
	int placeofhar = 1;
	cout << "BANG!!!!!" << endl;
	cout << "AND THEY'RE OFF!!!!!" << endl;
	while(placeoftor<70&&placeofhar<70)
	{
		strategyoftortise(&placeoftor);
		strategyofhare(&placeofhar);
		cout << "the place of the tortoise is:  " << placeoftor << endl;
		cout << "the place of the hare is:  " << placeofhar << endl;
		if (placeoftor > placeofhar)
			cout << "T" << endl;
		if (placeoftor < placeofhar)
			cout << "H" << endl;
		if (placeoftor == placeofhar)
			cout << "OUTH" << endl;
	}
	if (placeoftor >= 70 && placeofhar >= 70)
		cout << "It's a tie" << endl;
	else 
	{
		if (placeoftor >= 70)
			cout << "TORTOISE WINS!!!YAY!!!" << endl;
		if (placeofhar >= 70)
			cout << "HARE WINS. YUCH." << endl;
	}
	return 0;
}
int strategyoftortise(int *a)
{
	int strategyoftor = rand() % 10;
	if (strategyoftor >= 1 && strategyoftor <= 5)
		*a = *a + 3;
	if (strategyoftor >= 6 && strategyoftor <= 7)
		*a = *a - 6;
	if (strategyoftor >= 8 && strategyoftor <= 10)
		*a = *a + 1;
	if (*a <= 0)
		*a = 1;
	return 0;
}
int strategyofhare(int *b)
{
	int strategyofhare = rand() % 10;
	if (strategyofhare >= 1 && strategyofhare <= 2)
		*b = *b;
	if (strategyofhare >= 3 && strategyofhare <= 4)
		*b= *b +9;
	if (strategyofhare >= 5 && strategyofhare <= 5)
		*b = *b -12;
	if (strategyofhare >= 6 && strategyofhare <= 8)
		*b = *b + 1;
	if (strategyofhare >= 9 && strategyofhare <= 10)
		*b = *b -2;
	if (*b <= 0)
		*b = 1;
	return 0;
}
