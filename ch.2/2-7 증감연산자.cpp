//증감연산자

#include <iostream>

using namespace std;

int main() {

	int x = 1, y = 1;
	int nextx, nexty;

	nextx = ++x; // x = x + 1; nextx = x;
	nexty = y++; // nexty = y, y = y + 1;

	cout << nextx << ", " << nexty << endl;
	cout << x << ", " << y << endl;

	 

	return 0;
}