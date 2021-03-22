//문제 29

#include <iostream>
#include <cmath>


using namespace std;

int main() {

	int a, b, c;
	int count=0;

	for (a = 0; a < 100; a++) {
		for (b = 0; b < 100; b++) {
			for (c = 0; c < 100; c++) {
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
					count++;
			}
		}
	}

	cout <<"만들 수 있는 삼각형의 개수는 "<<count << "개" << endl;

	return 0;
}