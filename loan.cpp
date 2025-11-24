#include "loan.h"
#include <string>

// constructor
Loan::Loan() {

}

Loan::Loan(int id, int bookId, int memberId, string start, string end)
    : id(id), bookId(bookId), memberId(memberId)
{
    // string → sys_days 변환
    // 형식: YYYY-MM-DD
    int y = stoi(start.substr(0, 4));
    int m = stoi(start.substr(5, 2));
    int d = stoi(start.substr(8, 2));
    startdate = sys_days{ year{y} / month{m} / day{d} };

    int y2 = stoi(end.substr(0, 4));
    int m2 = stoi(end.substr(5, 2));
    int d2 = stoi(end.substr(8, 2));
    enddate = sys_days{ year{y2} / month{m2} / day{d2} };
}

Loan::Loan(int id, int bookId, int memberId, sys_days startdate, sys_days enddate) {

}

// getter
int Loan::getId() const {

}
int Loan::getBookId() const {

}
int Loan::getMemberId() const {

}
sys_days Loan::getStartDate() const {

}
sys_days Loan::getEndDate() const {

}

// setter
void Loan::setEndDate() const {

}

// function
bool Loan::isExpired() {

}
