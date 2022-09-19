#pragma once
#include "BookIO.h"
class BookIOManager {
	int bookCount;//к-сть студентів
	Book* books;//масив студентів
	BookIO* IOWorker;//обєкт для вводу/виводу інформації про студента
public:
	BookIOManager();
	~BookIOManager(void);
	void FillBooks();
	void Show();
	void ShowByName();
	void ShowByAuthor();
	void ShowByPublishHouse();
	void ShowByPublishYear();
};

