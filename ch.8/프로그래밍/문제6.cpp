//문제 6

#include<iostream>

using namespace std;

class Complex
{
private:																				// 변수 변경 못하도록 private 정의
	double real_num;
	double img_num;

public:																			
	void set_real_num(double);
	double get_real_num();
	void set_img_num(double);
	double get_img_num();
	void print();																		// 복소수 출력 함수
	void addition(Complex);																// 덧셈 연산
	void substraction(Complex);															// 뺄셈 연산

};


void Complex::set_real_num(double a) { 
	real_num = a; 
}
double Complex::get_real_num() 
{ 
	return real_num;
}
void Complex::set_img_num(double a) 
{ 
	img_num = a; 
}
double Complex::get_img_num() { 
	return img_num; 
}

// 복소수 출력 함수
void Complex::print() {																
	cout << real_num;
	if (img_num > 0)
		cout << "+" << img_num << "i" << endl;												// 허수	부가 양수이면 +i 출력
	else if (img_num < 0)
		cout << img_num << "i" << endl;														// 허수 부가 음수이면 i 출력
}

// 더하기 함수
void Complex::addition(Complex second) {
	this->real_num += second.get_real_num();
	this->img_num += second.get_img_num();
}
// 빼기 함수
void Complex::substraction(Complex second) {
	this->real_num -= second.get_real_num();
	this->img_num -= second.get_img_num();
}

int main() {
	Complex second_num1;
	Complex second_num2;

	cout << "<덧셈>" << endl;
	second_num1.set_real_num(10);															// 실수부 설정
	second_num1.set_img_num(5);																// 허수부 설정
	cout << "첫 번째 수 : ";																
	second_num1.print();																	

	second_num2.set_real_num(5);															// 실수부 설정
	second_num2.set_img_num(10);															// 허수부 설정
	cout << "두 번째 수 : " ;														
	second_num2.print();																	

	second_num1.addition(second_num2);														// addition() 함수를 호출하여 두 수를 더함.
	cout << "첫 번째 수 + 두 번째 수 : ";
	second_num1.print();																	// 결과 출력
	cout << endl;


	cout << "<뺄셈>" << endl;
	second_num1.set_real_num(5);															// 실수부를 5로 설정
	second_num1.set_img_num(5);																// 허수부를 5로 설정
	cout << "첫 번째 수 : " ;												
	second_num1.print();																	

	second_num2.set_real_num(10);															// 실수부 설정
	second_num2.set_img_num(10);															// 허수부 설정
	cout << "두 번째 수 : " ; 
	second_num2.print();																	

	second_num1.substraction(second_num2);													// substraction() 함수를 호출하여 두 수를 뺌
	cout << "첫 번째 수 - 두 번째 수 : " ;
	second_num1.print();																	// 결과 출력

	return 0;

}