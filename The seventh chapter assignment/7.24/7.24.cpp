#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int flag = 0;
const int set[8][8] = {
	2,3,4,4,4,4,3,2,
	3,4,6,6,6,6,4,3,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	3,4,6,6,6,6,4,3,
	2,3,4,4,4,4,3,2 };
const int row[8] = { 2,1,-1,-2,-2,-1,1,2 }, column[8] = { -1,-2,-2,-1,1,2,2,1 };
void tour(int[8][8], int arraysize, int x, int y, int times);
void strategy(int[], int arraysize, int x, int y, int[][8], int arraysize2);
int main()
{
	int x, y;
	cout << "enter two numbers to represent the place of the knight: " << endl;
	cin >> x >> y;
	int world[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			world[i][j] = 0;
	world[y][x] = 1;
	tour(world, 8, x, y, 1);
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			cout <<left<<setw(2)<< world[i][j] << "   ";
			if (j == 7)
				cout << endl;
		}
	return 0;
}

void tour(int world[8][8], int arraysize, int x, int y, int times)
{
	int difficult1[8];
	int difficult2[8];
	if (times == 64) {
		flag = 64;
	}
	for (int i = 0; i < 8; i++)
		difficult1[i] = 9;
	strategy(difficult1, 8, x, y, world, 8);
	for (int i = 0; i < 8; i++)
		difficult2[i] = difficult1[i];
	sort(difficult2, difficult2 + 8);
	for (int i = 0; i<8; i++)
	{
		if (difficult2[i] == 9)
			break;
		for (int j = 0; j<8; j++)
			if (difficult1[j] == difficult2[i])
			{
				difficult1[j] = 9;
				times++;
				world[y + row[j]][x + column[j]] = times;
 				tour(world, 8, x + column[j], y + row[j], times);
				if (flag == 64)
					return;
				world[y + row[j]][x + column[j]] = 0;
				times--;
			}
	}
}

void strategy(int difficult[], int arraysize, int x, int y, int world[][8], int arraysize2)
{
	for (int i = 0; i<8; i++)
	{
		int newx = 0, newy = 0;
		newx = x + column[i];
		newy = y + row[i];
		if (newx >= 0 && newx < 8 && newy >= 0 && newy < 8)
			if (world[newy][newx] == 0) {
				difficult[i] = set[newy][newx];
			}
	}
	return;
}
