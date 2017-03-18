#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int condition = 1;
	double sales, sallary;
	while(condition==1)
	{
		
		cout << "Enter sales in dollars(-1 to end): ";
		cin >> sales;
		if (sales == -1)
			break;
		sallary = 200 + sales*0.09; 
		cout << "Sallary is: "<<fixed << setprecision(2)<< sallary;
		cout << endl << endl;

	}
	return 0;
}