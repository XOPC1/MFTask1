#pragma once
#include <iostream>

struct DB {
	std::string title;
	int notesCount = 0;
	std::string notes;
};

void addNote(DB& base);
void clearNotes(DB& base);
void showDB(DB& base);