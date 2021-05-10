//문제 6

#include<iostream>
using namespace std;

void add_tax(double& salary, double rate = 20);									//함수의 원형 정의 디폴트 비율 = 20%

int main() {

	double salary, rate;

	cout << "월급 입력(만원) >> ";
	cin >> salary;													

	cout << "소득세율 입력 (입력 안하는 경우 -1 입력, defalut값 : 20%) >> ";
	cin >> rate;

	
	if (rate==-1) {																// 소득세를 입력 안한다면 -1을 입력한 경우														
		add_tax(salary);														// 월급만 매개변수로 넘김		
	}
	else						
		add_tax(salary, rate);													// 소득세를 입력하면 월급+소득세를 매개변수로 넘김

	cout << "월급 + 소득세 = " << salary <<"만원"<< endl;

	return 0;
	

}

void add_tax(double& salary, double rate) {										//레퍼런스를 이용한 반환
	
	rate = rate / 100;

	salary = salary + salary * rate;								
}