#include <iostream>
#include <iomanip>

using namespace std;

static int SelectionThree(int attack) {
	srand(time(0));
	int getTrain = (rand() % 5 + 1);

	cout << "You chosen to train." << endl;

	for (int i = 0; i <= getTrain; i++) {
		cout << "!";
	}
	cout << endl;
	cout << "You trained " << getTrain << " atk!" << endl << endl;

	return getTrain;
}