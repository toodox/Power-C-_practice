//18번

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long a, b, c, num1, num2;
	

	cout << "ax²+ bx + c 의 a b c 입력: ";
	cin >> a >>b >> c;

	num1 = ((double)b * (-1) + sqrt((b * b) - (4 * a * c))) / (2 * (double)a);
	num2 = ((double)b * (-1) - sqrt((b * b) - (4 * a * c))) / (2 * (double)a);

	cout << "첫번째 해 = " << num1 << endl;
	cout << "두번째 해 = " << num2 << endl;




	return 0;
}