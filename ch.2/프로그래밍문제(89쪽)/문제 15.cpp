//15번 -> 품

#include <iostream>
#define PI 3.141592 // =const double PI = 3.141592;

using namespace std;

int main() {

	double r;
	double A, V;

	cout << "구의 반지름 입력: ";
	cin >> r;

	A = 4 * PI * r * r;
	V = 4 / 3 * PI * r * r * r;

	cout << "구의 표면적: " << A << endl;
	cout << "구의 부피: " << V << endl;


	return 0;
}