//������������ ������ ������� �++
#include <iostream>
#include <string>
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	DB shopList = { "Shop list" };
	string answer;
	do {
		cout << "�������� ��������:\n";
		cout << "add;\n";
		cout << "clear;\n";
		cout << "show;\n";
		cout << "end.\n";
		cout << "������� ������� -> ";
		getline(cin, answer);
		if (answer == "add")
			addNote(shopList);
		else
			if (answer == "clear") {
				clearNotes(shopList);
				cout << "������ ������\n";
			}
			else
				if (answer == "show")
					showDB(shopList);
				else
					if (answer == "end")
						cout << "��������� ���������";
					else
						cout << "������� �� ����������";
		cout << endl;
	} while (answer!="end");


	return 0;
}