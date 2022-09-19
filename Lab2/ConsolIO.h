#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
/*----------------------------------------------
Статичний клас для роботи з консоллю
------------------------------------------------*/
class ConsolIO
{
public:
	static int GetValue(istream& is)
	{
		setlocale(LC_ALL, "Ukrainian");
		int value;
		while (true)
		{
			is >> value;
			if (is.peek() == '\n')
			{
				is.get();
				break;
			}
			else
			{
				cout << "\n\tНЕКОРЕКТНИЙ ВВIД!Очiкується дiйсне число.Повторiть: ";
				is.clear();
				while (is.get() != '\n') {};
			}
		}
		return value;
	};
	/*-----------------------------------------------------
	Зчитує текстову інформацію з консолі до кінця
	рядка, якщо введено порожню стрічку або стрічку
	складається лише з пробілів, пропонує ввести текст знову
	-------------------------------------------------------*/
	static char* GetText(istream& is)
	{
		char* buffer = new char[255];

		while (true)
		{
			setlocale(LC_ALL, "Ukrainian");
			SetConsoleCP(1251); //встановлення кодування Windows-1251
			is.getline(buffer, '\n');
			SetConsoleCP(866); //повернення до кодування CP866
				if (strlen(buffer) > 0)
				{
					int emptyChar = 0;
					for (int i = 0; i < strlen(buffer); i++)
						if (buffer[i] == '\0')
							emptyChar++;
					if (emptyChar != strlen(buffer))
						break;

				}
			cout << "\n\tНЕКОРЕКТНИЙ ВВIД!Очiкується текстова iнформацiя. Повторiть ввiд : " << endl;
		}
		is.clear();
		return buffer;
	};
};
