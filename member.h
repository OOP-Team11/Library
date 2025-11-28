#pragma once
#include "role.h"
#include <string>
using namespace std;

class Member {
private:
	int id;
	Role role;
	string name;
	string password; // unique 해야함. 회원가입할 때 unique 처리
	int score; // 반납 기한 연체시 점수 깎는 기능 대비

public:
	// contructor
	Member();
	Member(int id, const string& name, const string& password, Role role);
	Member(int id, const string& name, const string& password); // 일반 로그인 -> 자동으로 일반 회원으로

	// getter
	int getId() const;
	string getName() const;
	string getPassword() const;
	Role getRole() const;
	int getScore() const;

	// setter - 일단 만들어두고 이후에 필요하다면.
	void setName(const string& name);
	void setRole(Role role); 
	void setScore(int score);

	// function
	bool canLoan() const; // 대출 가능 여부 (추후 사용 고려)
	bool isUser() const; // 일반 회원인지
	bool isAdmin() const; // 관리자인지
	
};
