#include "BookManager.h"

BookIOManager::BookIOManager()
{
	cout << "����i�� � - ��� ���� : ";
	bookCount = ConsolIO::GetValue(cin);;
	books = new Book[bookCount];
	IOWorker = new BookIO();
}
BookIOManager::~BookIOManager(void)
{
	delete[]books;
	delete IOWorker;
}
void BookIOManager::FillBooks()
{
	for (int i = 0; i < bookCount; i++)
	{
		IOWorker -> Input(books[i]);
	}
}
void BookIOManager::Show()
{
	cout << "\n������ ��i� ���� : " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		IOWorker -> Output(books[i]);
	}
}
void BookIOManager::ShowByName()
{
	cout << "����� ����� �� ������. ����i�� ����� �����: ";
	char* value = ConsolIO::GetText(cin);

	cout << "\n����� � ������" << value << ":" << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker -> Output(books[i]);

	}
	delete value;
}

void BookIOManager::ShowByAuthor()
{
	cout << "����� ����� �� �������� ������. ����i�� ������� ������ : ";
	char* value = ConsolIO::GetText(cin);
	cout << "\n����� ������ " << value << " : "<<endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker->Output(books[i]);

	}
}

void BookIOManager::ShowByPublishHouse()
{
	cout << "����� ����� �� ������������. ����i�� ����� ����������� : ";
	char* value = ConsolIO::GetText(cin);
	cout << "\n����� ������ " << value << " : " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker->Output(books[i]);

	}
}

void BookIOManager::ShowByPublishYear()
{
	cout << "����� ����� �� ����� �������. ����i�� �� �������: ";
	int year = ConsolIO::GetValue(cin);
	cout << "\n����� ������� " << year << "����: " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (books[i].getPublishYear() == year)
			IOWorker -> Output(books[i]);

	}
}
