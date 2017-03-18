# include <iostream>
#include"Time.h"
# include <stdexcept> 
# include <iomanip>
using namespace std;
int main()
{
	Time t1(1926, 8, 17, 10, 59, 59);
	cout << "长者的出生日期：";
	t1.print_standard();
	t1.print_universal();
	int a;
	cout << endl << "你希望为长者续命多少秒？" << endl;
	cin >> a;
	t1.add_second(a);
	cout << " for 长者 " << endl;
	t1.print_standard();
	t1.print_universal();

	t1.get_hour();
}