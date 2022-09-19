#include <conio.h>
#include <iostream>
#include "BookManager.h"

int main() {
	setlocale(LC_ALL, "Ukrainian");
	BookIOManager allBooks;
	allBooks.FillBooks();
	allBooks.Show();
	allBooks.ShowByName();
	allBooks.ShowByAuthor();
	allBooks.ShowByPublishHouse();
	allBooks.ShowByPublishYear();
	while (!_kbhit());
	return 0;
}