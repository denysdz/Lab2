#include "Book.h"

Book ::Book (void) {
	setBookName("Unknown");
	setAuthorName("Unknown");
	setPublishHouse("Unknown");
	setPublishYear(0);
	setPages(0);
}

Book::~Book () {
	delete[] bookName;
	delete[] authorName;
	delete[] publisHouse;
}

char* Book::getBookName() {
	return bookName;
}

char* Book::getAuthorName() {
	return authorName;
}

char* Book::getPublishHouse() {
	return publisHouse;
}

int Book::getPublishYear() {
	return publishYear;
}

int Book::getPages() {
	return pages;
}

void Book::setBookName(const char* value) {
	bookName = new char[strlen(value) + 1];
	strcpy(bookName, value);
}

void Book::setAuthorName(const char* value) {
	authorName = new char[strlen(value) + 1];
	strcpy(authorName, value);
}

void Book::setPublishHouse(const char* value) {
	publisHouse = new char[strlen(value) + 1];
	strcpy(publisHouse, value);
}

void Book::setPublishYear(int value) {
	publishYear = value;
}

void Book::setPages(int value) {
	pages = value;
}

