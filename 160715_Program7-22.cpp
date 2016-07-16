#include <iostream>
#include <iomanip>
using namespace std;

const int COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

void showArray(const int [][COLS], int);

int main()
{
	int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4}};
	int table2[TBL2_ROWS][COLS] = {{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4}};
	cout << "The contents of table1 are:\n";
	showArray(table1, TBL1_ROWS);
	cout << "The contents of table2 are:\n";
	showArray(table2, TBL2_ROWS);
	return 0;
}

void showArray(const int numbers[][COLS], int rows)
{
	for(int x = 0; x < rows; x++)
	{
		for(int y = 0; y < COLS; y++)
			cout << setw(4) << numbers[x][y] << " ";
		cout << endl;
	}
}