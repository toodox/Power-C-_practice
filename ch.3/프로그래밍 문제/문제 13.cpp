//문제 13

#include <iostream>
#include <cstdlib>
#include <time.h>

#define MAX 3


using namespace std;

int main() {
	
	int rock, scissor, paper;

	rock = 1;
	scissor = 2;
	paper = 3;

	int com_num, user_num;

	while (1) {
		srand((unsigned)time(NULL));
		com_num = rand() % MAX + 1;

		cout << "가위 : 1 , 바위 : 2, 보 : 3 " << endl;
		cout << "<가위, 바위, 보> 중 숫자를 입력하세요 : ";
		cin >> user_num;

		if (user_num == 1) {

			if (com_num == user_num) {
				cout << "컴퓨터 : 가위, 유저 : 가위" << endl;
				cout << "비겼습니다. 게임을 다시하세요.\n" << endl;
			}
			else if (com_num - user_num == 1) {
				cout << "컴퓨터 : 바위, 유저 : 가위" << endl;
				cout << "컴퓨터가 승리했습니다.\n" << endl;
				break;
			}
			else {
				cout << "컴퓨터 : 보, 유저 : 가위" << endl;
				cout << "유저가 승리했습니다.\n" << endl;
				break;
			}

		}

		if (user_num == 2) {

			if (com_num == user_num) {
				cout << "컴퓨터 : 바위, 유저 : 바위" << endl;
				cout << "비겼습니다. 게임을 다시하세요.\n" << endl;
			}
			else if (com_num - user_num == 1) {
				cout << "컴퓨터 : 보, 유저 : 바위" << endl;
				cout << "컴퓨터가 승리했습니다.\n" << endl;
				break;
			}
			else {
				cout << "컴퓨터 : 가위, 유저 : 바위" << endl;
				cout << "유저가 승리했습니다.\n" << endl;
				break;
			}

		}

		if (user_num == 3) {

			if (com_num == user_num) {
				cout << "컴퓨터 : 보, 유저 : 보" << endl;
				cout << "비겼습니다. 게임을 다시하세요.\n" << endl;
			}
			else if (com_num - user_num == -1) {
				cout << "컴퓨터 : 바위, 유저 : 보" << endl;
				cout << "컴퓨터가 승리했습니다.\n" << endl;
				break;
			}
			else {
				cout << "컴퓨터 : 가위, 유저 : 보" << endl;
				cout << "유저가 승리했습니다.\n" << endl;
				break;
			}

		}
		
	}
	

	return 0;
}