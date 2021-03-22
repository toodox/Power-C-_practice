//문제 3

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int binary, count, i, copy;

	count = 0;
	i = 0;

	cout << "2진수 입력 : ";
	cin >> binary;

	copy = binary;

	while (binary > 0) {
		count += copy % 10 * pow(2, i);
		i++;
		
		binary /= 10;
	}

	cout << count << endl;



	return 0;
}