#include "book.h"
#include <string>

Book::Book() {

}
Book::Book(int id, string name, string writer, BookCategory category) {

}
Book::Book(int id, string name, string writer) {

}

// getter
int Book::getId() const {

}
string Book::getName() const {

}
string Book::getWriter() const {

}
BookCategory Book::getCategory() const {

}
bool Book::getIsLoan() const {

}

// setter
void Book::setName(string name) {

}
void Book::setWriter(string writer) {

}
void Book::setCategory(BookCategory category) {

}
void Book::setIsLoan() {

}

// functions
bool Book::isLoan() const {

}