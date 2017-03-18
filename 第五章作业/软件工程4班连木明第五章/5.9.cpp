#include <iostream>
using namespace std;
int main()
{
	int product = 1;
	cout << "we will calculate the product of the odd integers from 1to 15. \n";
	for (int i = 1; i <= 15; i += 2)
		product *= i;
	cout << "the product is ;" << product;
	return 0;

}