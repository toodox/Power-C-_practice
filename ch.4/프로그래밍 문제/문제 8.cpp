//문제 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_range(int num1, int num2);
int rand_range_dice(int num1, int num2);

int main() {

	srand((unsigned)time(NULL)); //매번 실행시 다른 무작위 난수 출력

	int min, max;

	int dice_1, dice_2, dice_3, dice_4, dice_5, dice_6;

	dice_1 = dice_2 = dice_3 = dice_4 = dice_5 = dice_6 = 0;

	cout << "최솟값과 최댓값 입력 >> ";
	cin >> min >> max;

	cout << "무작위로 출력한 값 >> " << rand_range(min, max) << endl << endl;

	cout << "주사위의 각 수는 몇 번씩 나왔을까?" << endl;

	for (int i = 0; i <= 600; i++) {
		if (rand_range_dice(min, max) == 1)
			dice_1++;
		else if (rand_range_dice(min, max) == 2)
			dice_2++;
		else if (rand_range_dice(min, max) == 3)
			dice_3++;
		else if (rand_range_dice(min, max) == 4)
			dice_4++;
		else if (rand_range_dice(min, max) == 5)
			dice_5++;
		else if (rand_range_dice(min, max) == 6)
			dice_6++; 
	}//rand_range_dice 값이 각 주사위 숫자가 나오면 해당 번호 카운트 1 추가

	cout << "1번 : " << dice_1 << endl;
	cout << "2번 : " << dice_2 << endl;
	cout << "3번 : " << dice_3 << endl;
	cout << "4번 : " << dice_4 << endl;
	cout << "5번 : " << dice_5 << endl;
	cout << "6번 : " << dice_6 << endl;
	//주사위 번호 별 나온 횟수 출력

	return 0;
}

int rand_range(int num1, int num2) {

	return rand() % num2 + num1; //최솟값부터 최댓값 사이의 수 출력

}

int rand_range_dice(int num1, int num2) {

	return rand() % 6 + 1; //주사위 숫자 1부터 6까지 출력

}