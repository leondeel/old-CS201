#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char** argv) {

	int UserInput, SpacesNeededinRow, ColumnNumber = 1, RowNumber = 1, HashtagsNeededInRow = 1;
	cout << "Enter a positive integer:  ";
	cin >> UserInput;
	while (RowNumber <= UserInput) {
		SpacesNeededinRow = UserInput - RowNumber;
		while (ColumnNumber <= HashtagsNeededInRow) {
			while (SpacesNeededinRow>0) {
				cout << " ";
				SpacesNeededinRow--;
			}
			cout << "#";
			ColumnNumber++;
		}
		cout << endl;
		ColumnNumber = 1;
		HashtagsNeededInRow = 2*RowNumber+1;
		RowNumber++;
		
	}




}	