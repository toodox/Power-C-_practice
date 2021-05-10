//문제 10

#include <iostream>

using namespace std;

bool get_menu_number(int num);
int print_menu();
void receive_menu(int num);

int main() {

	int num;

	while (1) {
		num = print_menu();
		if (get_menu_number(num) == true) //  get_menu_number가 true 면(범위 내 숫자를 입력받으면) 
			break; // 반복문 탈출
	}

	return 0;
}

int print_menu() {

	int n;

	cout << "1. 햄버거" << endl;
	cout << "2. 치즈버거" << endl;
	cout << "3. 샌드위치" << endl;
	cout << "4. 종료" << endl;
	cout << "원하는 메뉴를 선택하시오. : ";
	cin >> n;

	return n; // 메뉴 번호를 입력받고 그에 맞는 번호 출력
}

bool get_menu_number(int num) {
	if (num < 1 || num>4) { // 1보다 작거나 4보다 큰 수를 입력받으면
		cout << "\n";
		return false; // false 출력
	}
	else { // 1과 4 사이 수를 입력받으면
		receive_menu(num); 
		return true; //true 출력
	}
}

void receive_menu(int num) { // 1부터 4까지 메뉴에 해당하는 문구 출력
	if (num == 1) {
		cout << "햄버거가 호출되었습니다." << endl;
	}
	if (num == 2) {
		cout << "치즈버거가 호출되었습니다." << endl;
	}
	if (num == 3) {
		cout << "샌드위치가 호출되었습니다." << endl;
	}
	if (num == 4) {
		cout << "종료" << endl;
	}
}