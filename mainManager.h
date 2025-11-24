#pragma once
#include "memberManager.h"
#include "bookManager.h"
#include "loanManager.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class MainManager {
private:
	MemberManager members;
	BookManager books;
	LoanManager loans;
	int userId; // 현재 프로그램 사용하고있는 유저 아이디. 로그인하면 여기 갱신(?)

public:
	// constructor
	MainManager();

	// 기능
	// 회원 관련
	void setMembers();
	//void join();
	//void login(); // 여기서 userId <- 반환된 id 연결시키기

	// 도서 관련
	void setBooks();

	// 대출 관련
	void setLoans();
};
