#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
/*----------------------------------------------
��������� ���� ��� ������ � ��������
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
				cout << "\n\t����������� ��I�!��i������ �i���� �����.������i��: ";
				is.clear();
				while (is.get() != '\n') {};
			}
		}
		return value;
	};
	/*-----------------------------------------------------
	����� �������� ���������� � ������ �� ����
	�����, ���� ������� ������� ������ ��� ������
	���������� ���� � ������, ������� ������ ����� �����
	-------------------------------------------------------*/
	static char* GetText(istream& is)
	{
		char* buffer = new char[255];

		while (true)
		{
			setlocale(LC_ALL, "Ukrainian");
			SetConsoleCP(1251); //������������ ��������� Windows-1251
			is.getline(buffer, '\n');
			SetConsoleCP(866); //���������� �� ��������� CP866
				if (strlen(buffer) > 0)
				{
					int emptyChar = 0;
					for (int i = 0; i < strlen(buffer); i++)
						if (buffer[i] == '\0')
							emptyChar++;
					if (emptyChar != strlen(buffer))
						break;

				}
			cout << "\n\t����������� ��I�!��i������ �������� i�������i�. ������i�� ��i� : " << endl;
		}
		is.clear();
		return buffer;
	};
};