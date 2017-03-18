#include <iostream>
#include <cstring>
using namespace std;

const int _Size = 8;

int temp = 0;
bool Board[_Size][_Size];
bool _IfYFulled[_Size];
bool _IfLFulled[_Size + _Size - 1];
bool _IfRFulled[_Size + _Size - 1];

void _EightQueens(int x) {
	if (x == 7) {
		temp++;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (Board[i][j]) {
					cout << "* ";
				}
				else {
					cout << "0 ";
				}
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	//print
	for (int i = 0; i < 8; i++) {
		if (!_IfYFulled[i] && !_IfLFulled[x + i + 1] && !_IfRFulled[x + 8 - i]) {
			_IfYFulled[i] = _IfLFulled[x + i + 1] = _IfRFulled[x + 8 - i] = Board[x + 1][i] = true;
			_EightQueens(x + 1);
			_IfYFulled[i] = _IfLFulled[x + i + 1] = _IfRFulled[x + 8 - i] = Board[x + 1][i] = false;
		}
	}
	return;
}

int main()
{
	memset(Board, false, sizeof(Board));
	memset(_IfYFulled, false, sizeof(_IfYFulled));
	memset(_IfLFulled, false, sizeof(_IfLFulled));
	memset(_IfRFulled, false, sizeof(_IfRFulled));
	_EightQueens(-1);
	cout << temp;
	return 0;
}