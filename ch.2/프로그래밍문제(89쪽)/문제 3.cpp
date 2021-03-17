//89페이지 문제 3

#include <iostream>
#define PYEONG 3.3058

using namespace std;

int main() {

	int num1;
	double PtoM;

	cout << "몇 평 입니까? :";
	cin >> num1;

	PtoM = num1 * PYEONG;

	cout << num1 << "평은 " << PtoM << "평방미터 입니다." << endl;

	return 0;
}