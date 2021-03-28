//문제 10

#include <iostream>

using namespace std;

int get_menu_number(int num);
int print_menu();

int main() {

	int num, judge_num;

	num = print_menu();
	judge_num = get_menu_number(num);

	if (get_menu_number(num != 2)) {
		cout << "잘못된 메뉴를 선택하셨습니다. 다시 선택해주세요." << endl;
		print_menu();
	}
	else {
		
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

	return n;

}

int get_menu_number(int num) {

	if (num >= 1 && num <= 4) {
		return 2;
	}
}