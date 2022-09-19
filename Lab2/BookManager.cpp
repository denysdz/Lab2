#include "BookManager.h"

BookIOManager::BookIOManager()
{
	cout << "Введiть к - сть книг : ";
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
	cout << "\nСписок усiх книг : " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		IOWorker -> Output(books[i]);
	}
}
void BookIOManager::ShowByName()
{
	cout << "Пошук книги за назвою. Введiть назву книги: ";
	char* value = ConsolIO::GetText(cin);

	cout << "\nКниги з назвою" << value << ":" << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker -> Output(books[i]);

	}
	delete value;
}

void BookIOManager::ShowByAuthor()
{
	cout << "Пошук книги за прізвищем автора. Введiть прізвище автора : ";
	char* value = ConsolIO::GetText(cin);
	cout << "\nКниги автора " << value << " : "<<endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker->Output(books[i]);

	}
}

void BookIOManager::ShowByPublishHouse()
{
	cout << "Пошук книги за видавництвом. Введiть назву видавництва : ";
	char* value = ConsolIO::GetText(cin);
	cout << "\nКниги автора " << value << " : " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (strcmp(books[i].getBookName(), value) == 0)
			IOWorker->Output(books[i]);

	}
}

void BookIOManager::ShowByPublishYear()
{
	cout << "Пошук книги за роком видання. Введiть рік видання: ";
	int year = ConsolIO::GetValue(cin);
	cout << "\nКниги видання " << year << "року: " << endl;
	for (int i = 0; i < bookCount; i++)
	{
		if (books[i].getPublishYear() == year)
			IOWorker -> Output(books[i]);

	}
}
