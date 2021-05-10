//문제 7

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;																			//이름
	string address;																			//주소
	string digits;																			//전화 번호
public:
	void setname(string a) {
		this->name = a;
	}
	string getname() {
		return name;
	}

	void setaddress(string a) {
		this->address = a;
	}
	string getaddress() {
		return address;
	}

	void setdigits(string a) {
		this->digits = a;
	}
	string getdigits() {
		return digits;
	}

	void display() { 
		cout << "고객명 : " << name << endl << "주소 : " << address << endl << "전화번호" << digits << endl;
	}
};

class Customer : public Person {
private:
	int cnum = 0;													//고객 번호
	int m = 0;														//마일리지
public:
	void setcnum(int a) {
		this->cnum = a;
	}
	int getcnum() {
		return cnum;
	}

	void setm(int a) {
		this->m = a;
	}
	int getm() {
		return m;
	}

	void display() { 
		Person::display(); 
		cout << "고객 번호 : " << cnum << endl << "마일리지 : " << m << endl; 
	}
};

int main() {

	Customer c1;

	c1.setname("홍길동");
	c1.setaddress("용인");
	c1.setdigits("010-1234-5678");
	c1.setcnum(1);
	c1.setm(1000);
	c1.display();

	return 0;
}