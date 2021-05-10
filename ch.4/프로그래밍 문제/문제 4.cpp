//문제 4

#include <iostream>
#include <cmath>

double dist_2d(double x1, double y1, double x2, double y2);

using namespace std;

int main() {

	double x1, y1, x2, y2;
	double d;

	cout << "x1 좌표입력 : ";
	cin >> x1;

	cout << "y1 좌표입력 : ";
	cin >> y1;

	cout << "x2좌표 입력 : ";
	cin >> x2;

	cout << "y2좌표 입력 : ";
	cin >> y2;

	d = dist_2d(x1, y1, x2, y2); //두 점 사이의 거리를 구하는 함수 리턴값을 d에 대입

	cout << "두 점 사이의 거리 : " << d << endl;


	return 0;
}

double dist_2d(double x1, double y1, double x2, double y2) { //두 점 사이의 거리 구하는 함수
	
	int dist_x = pow((x2 - x1),2); // (x2-x1)^2
	int dist_y = pow((y2 - y1),2); // (y2-y2)^2
	return sqrt(dist_x + dist_y); // 루트 값 씌워서 리턴

}