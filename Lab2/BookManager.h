#pragma once
#include "BookIO.h"
class BookIOManager {
	int bookCount;//�-��� ��������
	Book* books;//����� ��������
	BookIO* IOWorker;//���� ��� �����/������ ���������� ��� ��������
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

