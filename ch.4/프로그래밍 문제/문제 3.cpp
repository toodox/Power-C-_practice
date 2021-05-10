//문제 3

#include <iostream>
#include <cmath>

using namespace std;

int ipower(int a, int b);

int main() {

	int n, k, total;

	cout << "정수 입력 : ";
	cin >> n;

	cout << "제곱승 수 입력 : ";
	cin >> k;

<<<<<<< HEAD
	total = ipower(n, k); // n의 k승을 리턴받아서 total에 대입
=======
	total = ipower(n, k);
>>>>>>> b2b7698f11acde4a263e9f2299367502edaecfaf

	cout << n << "의 " << k << "승 = " << total << endl << endl;

	n = 3;
	k = 0;

	for (k = 0; k <= 10; k++) {
<<<<<<< HEAD
		cout << "3의 " << k << "승 = " << pow(n, k) <<endl; // k를 0부터 10까지 증가시키며 n의 k승 출력
	} //3의 0승부터 10승까지 출력
	
=======
		cout << "3의 " << k << "승 = " << pow(n, k) <<endl;
	}
>>>>>>> b2b7698f11acde4a263e9f2299367502edaecfaf
	cout << "\n";


	return 0;
}

int ipower(int a, int b) {

<<<<<<< HEAD
	return pow(a, b); //매개변수를 입력받고 a의 b승 리턴
=======
	return pow(a, b);
>>>>>>> b2b7698f11acde4a263e9f2299367502edaecfaf

}