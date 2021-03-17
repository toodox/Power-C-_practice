//8번 -> 품

#include <iostream>

using namespace std;

int main() {

	int h, m, s;
	int m_to_sec, h_to_sec, total;

	cout << "시, 분, 초 입력 : ";
	cin >> h >> m >> s;

	m_to_sec = m * 60; // 1분은 60초
	h_to_sec = h * 3600; //1시간은 60*60=3600초
	total = s + m_to_sec + h_to_sec; // (입력된 초) + (분을 초로 변환한 초) + (시간을 초로 변환한 초)

	cout << h << "시간 " << m << "분 " << s << "초는 " << total << "초 입니다." << endl;



	return 0;
}