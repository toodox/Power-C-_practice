//문제 8

#include <iostream>

using namespace std;

void get_input(double debt, double &);									// 함수 원형 정의 (이자를 레퍼런스 매개 변수로 선언)

int main() {

	double debt, rate;

	cout << "대출받은 금액 입력(만원) >> ";
	cin >> debt;

	cout << "이율 입력 >> ";
	cin >> rate;

	get_input(debt, rate);

	cout << "한달 이자 >> " << rate << "만원" << endl;

	return 0;
}

void get_input(double debt, double& rate) {
	rate = debt * rate;													// 이자 = 원금 * 이율
}