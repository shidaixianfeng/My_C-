# include <iostream>
#include"Time.h"
# include <stdexcept> 
# include <iomanip>
using namespace std;
int main()
{
	Time t1(1926, 8, 17, 10, 59, 59);
	cout << "���ߵĳ������ڣ�";
	t1.print_standard();
	t1.print_universal();
	int a;
	cout << endl << "��ϣ��Ϊ�������������룿" << endl;
	cin >> a;
	t1.add_second(a);
	cout << " for ���� " << endl;
	t1.print_standard();
	t1.print_universal();

	t1.get_hour();
}