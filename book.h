#pragma once
#include "bookCategory.h"
#include <string>
using namespace std;

class Book {
private:
	int id;
	string name;
	string writer;
	BookCategory category;
	bool isLoan;

public:
	// constructor
	Book();
	Book(int id, string name, string writer, BookCategory category); // isLoan�� false�� �ʱ�ȭ.
	Book(int id, string name, string writer); // ī�װ��� ���� �������� �׳� �� 000���� �ǵ��� �ϳ� �����

	// getter
	int getId() const;
	string getName() const;
	string getWriter() const;
	BookCategory getCategory() const;
	bool getIsLoan() const;

	// setter
	void setName(string name);
	void setWriter(string writer);
	void setCategory(BookCategory category);
	void setIsLoan(); // ���� �ɶ� true�� false, false�� true �� switch ��� �ϵ���.

	// functions
	bool isLoan() const; // ���� getIsLoan�̶� ��ġ� �ϴ� �����.
};