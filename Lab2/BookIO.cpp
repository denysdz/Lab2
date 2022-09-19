#include "BookIO.h"
#include "ConsolIO.h"


/*--------------------------------------
Зчитує інформацію про студента з консолі

----------------------------------------*/
void BookIO::Input(Book& book)
{
	cout << "\n\tВведiть назву книги : ";
	char* bookName = ConsolIO::GetText(cin);
	book.setBookName(bookName);
	delete bookName;
	cout << "\n\tВведiть прізвище  автора: ";
	char* authorName = ConsolIO::GetText(cin);
	book.setAuthorName(authorName);
	delete authorName;
	cout << "\n\tВведiть видавництво: ";
	char* publishHouse = ConsolIO::GetText(cin);
	book.setPublishHouse(publishHouse);
	delete publishHouse;
	cout << "\tВведiть рік видавництва : ";
	book.setPublishYear(ConsolIO::GetValue(cin));
	cout << "\tВведiть кількість сторінок : ";
	book.setPages(ConsolIO::GetValue(cin));
}
/*----------------------------------------
Виводить інформацію про студента в консоль
-----------------------------------------*/

void BookIO::Output(Book& book)
{
	cout << "\t Назва книги: ";
	cout << book.getBookName() << endl;
	cout << "\t Автор: ";
	cout << book.getAuthorName() << endl;
	cout << "\t Видавництво: ";
	cout << book.getPublishHouse() << endl;
	cout << "\t Рік видавництва: ";
	cout << book.getPublishYear() << endl;
	cout << "\t Кількість сторінок: ";
	cout << book.getPages() << endl;
	
}