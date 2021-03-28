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

	cout << n << "의 " << k << "승 = " << total << endl << endl;

	n = 3;
	k = 0;

	for (k = 0; k <= 10; k++) {
		cout << "3의 " << k << "승 = " << pow(n, k) <<endl;
	}
	cout << "\n";


	return 0;
}

int ipower(int a, int b) {

	return pow(a, b);

}