#include<vcl.h>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<list>
#include<windows.h>
using namespace std;

/* public enum genre {
 'Prose', 'Poetry', 'Fantasy', 'Novel', 'Detective', 'Drama',
 'Horror and mysticism', 'Thriller', 'Myths and legends', 'Memoirs',
 'Scientific literature'
 } */

class Books {
private:
	String author;
	String name;
	String annotation;

public:
	String pathb = "book.txt";
};

// public list<string>favorit;
class BookInfoIO {
	String pathi = " info.h ";

	fstream fous;

	fous.open(pathi, ios_base::in | ios_base::out | ios_base::app);
	if (!fous.is.open()) {
		cout << "error";
	}
	else {
		SetConsoleCP(1251);
		getline(cin, genre);
		getline(cin, author);
		getline(cin, name);
		fous << genre << "#" << author << "#" << name << "#\n";
		while (!fous.eof()) {
			genre = "";
			author = "";
			name = "";
			fous >> genre >> " " >> author >> " " >> name >> " \n";
		}

	}
	fous.close;
};
