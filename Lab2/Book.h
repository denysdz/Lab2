#pragma once
#include <iostream>

class Book {

	protected:
		char* bookName;
		char* authorName;
		char* publisHouse;
		int publishYear;
		int pages;
    public: 
		Book(void);
		~Book(void);
		void setBookName(const char* val);
		char* getBookName();
		void setAuthorName(const char* val);
		char* getAuthorName();
		void setPublishHouse(const char* val);
		char* getPublishHouse();
		void setPublishYear(int val);
		int getPublishYear();
		void setPages(int val);
		int getPages();
};

