#include "member.h"

// contructor
Member::Member(){
}
Member::Member(int id, const string& name, const string& password, Role role){
}
Member::Member(int id, const string& name, const string& password){
}

// getter
int Member::getId() const{
}
string Member::getName() const{
}
string Member::getPassword() const{
}
Role Member::getRole() const{
}
int Member::getScore() const{
}

// setter - 일단 만들어두고 이후에 필요하다면.
void Member::setName(const string& name){
}
void Member::setRole(Role role){
}
void Member::setScore(int score){
}

// function
bool Member::canLoan() const{
}
bool Member::isUser() const{
}
bool Member::isAdmin() const{
}
