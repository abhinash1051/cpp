#include <cstdlib>
#include <iostream>

using namespace std;

void love(int baris) {
  if (baris == 1) {
		cout << ",d88b.d88b," << endl;
	} else if (baris == 2) {
		cout << "88888888888" << endl;
	} else if (baris == 3) {
		cout << "`Y Angel Y'" << endl;
	} else if (baris == 4) {
		cout << "  `Y888Y'" << endl;
	} else if (baris == 5) {
		cout << "    `Y'" << endl;
	}
}

int main() {
	cout << "Harder one" << endl;
	cout << "===========" << endl;
	for (int i = 1; i <= 5; i++) {
		love(i);
	}
	cout << "===========" << endl;

	// Simple Version
	cout << endl << "Simple one" << endl;
	int baris = 5;
	cout << "===========" << endl;
	for (int i = 1; i <= baris; i++) {
		if (i == 1) {
			cout << ",d88b.d88b," << endl;
		} else if (i == 2) {
			cout << "88888888888" << endl;
		} else if (i == 3) {
			cout << "`Y Angel Y'" << endl;
		} else if (i == 4) {
			cout << "  `Y888Y'" << endl;
		} else if (i == 5) {
			cout << "    `Y'" << endl;
		}
	}
	cout << "===========" << endl;
}