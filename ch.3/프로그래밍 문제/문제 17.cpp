//문제 17

#include <iostream>

using namespace std;

int main() {

	int mid, last, quiz;
	double total;
	int i;

	for(i=0;i<3;i++)
	{
		cout << "학생" << i+1 << "의 점수 입력 / 종료 시-1 입력" << endl;
		cout << "중간고사 :";
		cin >> mid;
		cout << "기말고사 : ";
		cin >> last;
		cout << "퀴즈 : ";
		cin >> quiz;

		total = mid * 0.4 + last + 0.5 + quiz * 0.1;

		if (total >= 90)
			cout << "A" << endl;
		else if (total >= 80)
			cout << "B" << endl;
		else if (total >= 70)
			cout << "C" << endl;
		else if (total >= 60)
			cout << "D" << endl;
		else
			cout << "F" << endl;

		cout << "\n";

	}

	return 0;
}