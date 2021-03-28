//문제 3

#include <iostream>
#include <cmath>

using namespace std;

int ipower(int a, int b);

int main() {

	int n, k, total;

	cout << "정수 입력 : ";
	cin >> n;

	cout << "제곱승 수 입력 : ";
	cin >> k;

	total = ipower(n, k);

	cout << total << endl << endl;

	n = 3;
	k = 0;

	for (k = 0; k <= 4; k++) {
		cout << "3^" << k << " = " << pow(n, k)<<"  ";
	}
	cout << "\n";

	for (k = 5; k <= 9; k++) {
		cout << "3^" << k << " = " << pow(n, k) << "  ";
	}
	cout << "\n";

	cout << "3^10 = " << pow(n, 10)<<endl;

	return 0;
}

int ipower(int a, int b) {

	return pow(a, b);

}