#include<iostream>
#include<string>
using namespace std;

class Book {
private:
	string title;					// 책 제목
	int page;						// 책 페이지수
	string author;					// 책 저자
public:
	void settitle(string a) {
		this->title = a;
	}
	string gettitle()  {
		return title;
	}

	void setPage(int a) {
		this->page = a;
	}
	int getPage()  {
		return page;
	}

	void setAuthor(string a) {
		this->author = a;
	}
	string getAuthor()  {
		return author;
	}

	void display()  {
		cout << "책 제목 > " << title << endl << "페이지 수 > " << page << endl << "저자 > " << author << endl;
	}
};

class Magazine : public Book {
private:
	string date; // 잡지 발매일
public:
	void setDate(string a) {
		this->date = a;
	}
	string getDate()  {
		return date;
	}

	void display() {
		Book::display();
		cout << "발매일 > " << date << endl;
	}
};

int main() {

	Magazine m1;

	m1.settitle("윈터 솔져");
	m1.setPage(356);
	m1.setAuthor("스티븐 로저스");
	m1.setDate("2053.06.09");
	m1.display();

	return 0;
}