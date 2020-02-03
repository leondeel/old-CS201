#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char** argv) {

	int UserInput , i=1, RowNumber=1, AmountNeededInRow=1;
	cout << "Enter a positive integer:  ";
	cin >> UserInput;
	while (RowNumber <= UserInput) {
		while (i <= AmountNeededInRow) {
			cout << "#";
			i++;
		}
		cout << endl;
		i = 1;
		AmountNeededInRow = RowNumber + 2;
		RowNumber++;
		
	}




}	