//9번 -> 품

#include <iostream>

using namespace std;

int main() {

	int number;
	int thousands, hundreds, tens, units;


	cout << "정수를 입력하시오: ";
	cin >> number;
	
	thousands = number / 1000; // 천의자리 숫자는 입력된 정수에서 1000으로 나눈 몫
	hundreds = (number%1000) / 100; // 백의자리 숫자는 입력된 정수에서 1000으로 나눈 나머지를 100으로 나눈 몫
	tens = (number%100) / 10; // 십의자리 숫자는 입력된 정수에서 100으로 나눴을 때 나머지를 10으로 나눈 몫
	units = (number%10) % 10; // 일의자리 숫자는 입력된 정수에서 10으로 나눴을 때 나머지를 10으로 나눈 몫

	cout << "천의자리: "<< thousands <<  endl;
	cout << "백의자리: " << hundreds << endl;
	cout << "십의자리: " << tens << endl;
	cout << "일의자리: " << units << endl;



	return 0;
}


