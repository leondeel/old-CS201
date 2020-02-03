#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char** argv) {

	int UserInput, SpacesNeededinRow, HashtagsInRow = 1, HashtagsNeededInRow = 1, RowNumber = 1;
	cout << "Enter a positive integer:  ";
	cin >> UserInput;
	while (RowNumber <= UserInput) {
		SpacesNeededinRow = UserInput - RowNumber;
		while (HashtagsInRow <= HashtagsNeededInRow) {
			while (SpacesNeededinRow>0) {
				cout << " ";
				SpacesNeededinRow--;
			}
			cout << "#";
			HashtagsInRow++;
		}
		cout << endl;
		HashtagsInRow = 1;
		HashtagsNeededInRow = 2*RowNumber+1;
		RowNumber++;
		
	}

	RowNumber = UserInput-1;  //Everything is going to be backwards now.  We will be counting the RowNumber down to zero instead of up from 1 as before. The second half of this code is similar but different to the first half.
	HashtagsNeededInRow = 2*(RowNumber-1) +1;

	while (RowNumber >0) {
		SpacesNeededinRow = UserInput-RowNumber;
		while (HashtagsInRow <= HashtagsNeededInRow) {
			while (SpacesNeededinRow > 0) {
				cout << " ";
				SpacesNeededinRow--;
			}
			cout << "#";
			HashtagsInRow++;
		}
		cout << endl;
		HashtagsInRow = 1;
		RowNumber--;
		HashtagsNeededInRow = 2 * (RowNumber - 1) + 1;
		

	}



}	