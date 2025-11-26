#include "memberManager.h"

/*
private:
	int memberCount; // 1로 초기화. 무조건 증가만. txt 파일에서 읽을때는 '제일 큰 id' 가 Count 변수가 됨.
	vector<Member> members;
*/

/* 멤버 클래스 하나를 읽어 멤버 배열 vector<Member> members에 추가함. */
void MemberManager::addMember(const Member& member) {
	members.push_back(member);
}

/* 특정 id를 가진 멤버를 삭제함. 성공 시 true를, 실패 시 false를 반환. */
bool MemberManager::removeMember(int id) {
	vector<Member>::iterator it = findMember(id);
	// 검색 실패
	if (it==members.end()) return false;
	// 검색 성공
	else {
		members.erase(it);
		return true;
	}
}
/* default constructor. */
MemberManager::MemberManager() {
	this->memberCount = 1;
}

/* 파일 이름 받아와 멤버 정보 불러오는 생성자. memberCount 주의. 항상 다음에 추가될 멤버의 id를 가지도록. */
MemberManager::MemberManager(string filename) {

}

/* 
특정 id를 가진 멤버를 찾아 iterator 타입으로 반환함.
실패한 경우 members.end()가 반환됨.
*/
vector<Member>::iterator MemberManager::findMember(int id) {
	vector<Member>::iterator it = members.begin();
	for (; it != members.end(); it++) {
		if ((it->getId()) == id) {
			break;
		}
	}
	return it;
}
/* 파일을 불러와 멤버변수 members에 저장. */
void MemberManager::save(string filename) {

}
/* 회원가입 메소드. name과 pw 받아 member생성하고, id 받아서 push_back.*/
bool MemberManager::join(string name, string password) {
	// User로 회원가입 되도록.
	Member newMember = Member(this->memberCount, name, password);
	members.push_back(newMember);
	// 추가된 멤버가 검색 가능하다면 가입이 제대로 됐다는 소리.
	if (findMember(memberCount) != members.end()) return true;
	else return false;
}
/* 로그인 기능. 이름과 패스워드가 일치하는 멤버가 있다면 id반환. 로그인 실패 시 -1 리턴.*/
int MemberManager::login(string name, string password) {
	vector<Member>::iterator it = members.begin();
	for (; it != members.end(); it++) {
		if ((it->getName() == name) && (it->getPassword() == password)) {
			break;
		}
	}
	// 로그인 실패
	if (it == members.end()) return -1;
	// 로그인 성공
	else {
		return it->getId();
	}

}
/* 모든 멤버 목록 리턴 */
vector<Member> MemberManager::getAllMembers() const {
	return members;
}

/* 회원 탈퇴 기능. 어딘가에서 getCurrentUser() 같은 걸로 현재 로그인한 사용자 정보 받아와야 함. */
void MemberManager::deleteMember(int id) {
	removeMember(id);
}