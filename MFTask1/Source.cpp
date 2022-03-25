//Персональный шаблон проекта С++
#include <iostream>
#include <string>
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	DB shopList = { "Shop list" };
	string answer;
	do {
		cout << "ВЫберите действие:\n";
		cout << "add;\n";
		cout << "clear;\n";
		cout << "show;\n";
		cout << "end.\n";
		cout << "Введите команду -> ";
		getline(cin, answer);
		if (answer == "add")
			addNote(shopList);
		else
			if (answer == "clear") {
				clearNotes(shopList);
				cout << "Список очищен\n";
			}
			else
				if (answer == "show")
					showDB(shopList);
				else
					if (answer == "end")
						cout << "Программа завершена";
					else
						cout << "Команда не обнаружена";
		cout << endl;
	} while (answer!="end");


	return 0;
}