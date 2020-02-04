#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv) {

	int UserInput, SpacesNeededInRow, HashtagsInRow, HashtagsNeededInRow, Row = 1;

	cout << "Enter a positive integer:  ";
	cin >> UserInput;

	while (UserInput < 1) {
		cout << "You entered zero or a negative integer.  Enter a positive integer:  ";
		cin >> UserInput;
	}
	if (UserInput > 0) {
		cout << "Thank you!" << endl;
	}
	while (Row <= UserInput) {
		SpacesNeededInRow = UserInput - Row;
		HashtagsInRow = 0;
		HashtagsNeededInRow = 2*Row-1;
		
		while (HashtagsInRow < HashtagsNeededInRow) {
			while (SpacesNeededInRow>0) {
				cout << " ";
				SpacesNeededInRow--;
			}
			cout << "#";
			HashtagsInRow++;
		}
		cout << endl;
		Row++;
	}

	Row = UserInput-1;  
	//Everything is going to be backwards now.  We will be counting the Row down to zero instead of up from 1 as before. The second half of this code is similar but different to the first half. 
	while (Row >0) {
		SpacesNeededInRow = UserInput - Row;
		HashtagsInRow = 0;
		HashtagsNeededInRow = 2 * Row - 1;

		while (HashtagsInRow < HashtagsNeededInRow) {
			while (SpacesNeededInRow > 0) {
				cout << " ";
				SpacesNeededInRow--;
			}
			cout << "#";
			HashtagsInRow++;
		}
		cout << endl;
		Row--;
	}
}	
