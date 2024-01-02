#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

static int SelectionTwo(int gold) {

	unsigned seed = time(0);
	srand(seed);
	int findGold = (rand() % 100 + 1);

	cout << "You chosen to farm gold." << endl;

	for (int i = 0; i < findGold; i++) {
		for (int j = 0; j < i+1; j++) {
		cout << "$";
		}
		cout << endl;
	}
	cout << endl;
	cout << "You found " << findGold << " gold!" << endl << endl;

	return findGold;
}