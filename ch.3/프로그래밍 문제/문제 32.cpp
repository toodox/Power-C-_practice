//문제 32

#include <iostream>

using namespace std;

int main() {

	int num,i,fib1,fib2,fib3;

	fib1 = 0;
	fib2 = 1;

	cout << "몇 번째 숫자까지 출력할까요 >> ";
	cin >> num;

	if (num == 1)
		cout << fib1 << endl;
	else if (num == 2)
		cout << fib1 << endl << fib2 << endl;
	else
		cout << fib1 << endl << fib2 << endl;
		for (i = 0; i < num - 2; i++) {
			fib3 = fib1 + fib2;
			cout << fib3 << endl;
			fib1 = fib2;
			fib2 = fib3;
			
		}

	return 0;
}