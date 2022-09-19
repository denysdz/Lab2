#include "BookIO.h"
#include "ConsolIO.h"


/*--------------------------------------
����� ���������� ��� �������� � ������

----------------------------------------*/
void BookIO::Input(Book& book)
{
	cout << "\n\t����i�� ����� ����� : ";
	char* bookName = ConsolIO::GetText(cin);
	book.setBookName(bookName);
	delete bookName;
	cout << "\n\t����i�� �������  ������: ";
	char* authorName = ConsolIO::GetText(cin);
	book.setAuthorName(authorName);
	delete authorName;
	cout << "\n\t����i�� �����������: ";
	char* publishHouse = ConsolIO::GetText(cin);
	book.setPublishHouse(publishHouse);
	delete publishHouse;
	cout << "\t����i�� �� ����������� : ";
	book.setPublishYear(ConsolIO::GetValue(cin));
	cout << "\t����i�� ������� ������� : ";
	book.setPages(ConsolIO::GetValue(cin));
}
/*----------------------------------------
�������� ���������� ��� �������� � �������
-----------------------------------------*/

void BookIO::Output(Book& book)
{
	cout << "\t ����� �����: ";
	cout << book.getBookName() << endl;
	cout << "\t �����: ";
	cout << book.getAuthorName() << endl;
	cout << "\t �����������: ";
	cout << book.getPublishHouse() << endl;
	cout << "\t г� �����������: ";
	cout << book.getPublishYear() << endl;
	cout << "\t ʳ������ �������: ";
	cout << book.getPages() << endl;
	
}