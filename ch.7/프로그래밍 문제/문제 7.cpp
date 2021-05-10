//문제 7

#include <iostream>
#include <cmath>																				// pow() 값 사용하기 위한 헤더파일 정의
#define PI 3.14																					// 원주율 값 3.14로 정의

using namespace std;

void cylinder(double &, double h = 1.0);														// 함수 원형 정의 (default 높이 = 1.0)

int main() {

	double r, h;

	cout << "원기둥의 반지름 입력 >> ";
	cin >> r;

	cout << "원기둥의 높이 입력 (높이 입력 안하는 경우 '-1' 입력, deflaut 높이 : 1.0) >> ";   
	cin >> h;

	if (h == -1) {																				// 높이 미입력 (-1 입력) 시 r만 매개변수로 보냄
		cylinder(r);
	}
	else {
		cylinder(r, h);																			// 높이 입력 시 r값과 h값 매개변수로 보냄
	}

	cout << "원기둥의 부피 >> " << r << endl;

	return 0;
}

void cylinder(double& r, double h) {															// 레퍼런스를 매개변수로 사용
	r = pow(r, 2) * h * PI;																		// 반지름^2 * 높이 * 3.14
}
