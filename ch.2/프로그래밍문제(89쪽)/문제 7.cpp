//7번

#include <iostream>

using namespace std;

int main() {

	int cm, feet;
	double inch, inch_point;

	cout << "키를 입력하시오 : ";
	cin >> cm;

	inch = cm / 2.54; // 1인치는 2.54cm이다
	feet = inch / 12; // 1피트는 12인치이다
	inch_point = inch - ((double)feet*12); // 15줄에서 구한 인치에서 16줄에서 구한 피트를 빼고 남은 인치를 구한다.

	cout << cm << "cm는 " << feet << "피트 " << inch_point << "인치입니다." << endl;


	return 0;
}