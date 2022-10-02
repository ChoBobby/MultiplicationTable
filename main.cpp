#include<iostream>

using namespace std;

int main() {
	int numRows;
	int numCols;
	int currRow;
	int currCol;

	cout << "Number of Rows: ";
	cin >> numRows;
	cout << "Number of Columns: ";
	cin >> numCols;
	cout << endl;

	for (currRow = 1; currRow <= numRows; ++currRow) {
		for (currCol = 1; currCol <= numCols; ++currCol) {
			cout << currRow * currCol << "	";
		}
		cout << endl << endl;
	}

	return 0;
}