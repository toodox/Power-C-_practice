//문제 26(미완)

#include <iostream>


using namespace std;

int main() {

	int result = 0;
	int i, j;


	for (i = 2; i < 100; i++) {

		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				result = 1;
				break;
			}
		}

		if (!result) {
			cout << i << "  " << endl;
		}

		result = 0;
	}


	return 0;
}