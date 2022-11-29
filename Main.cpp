// шаблон
#include<iostream>
#include <string>
#include<fstream>
#include<conio.h>
#include "structs.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3, n, r;
	book* arr = new book[size];

	arr[0] = {"avatar", "Tim Robins", 1949, 555, 1000 };
	arr[1] = { "Conan", "Tom Rogers", 1975, 777, 1000 };
	arr[2] = { "Rambo", "John Colins",1985, 200, 200 };
	
	std::string path = "file.txt";
	cout << "1 - полна€ информаци€ о книге, 2 - им€ автора, 3 - запись книги в каталог,'\n ";
	cout << "4 - запись новой книги, 5 - удаление книги, 6 - выход'\n";
	do {
		cout << "¬ведите номер опции:";
		cin >> r;
		switch (r) {
		case 1:
			cout << "\nвведите номер книги: ";
			cin >> n;

			show_book(arr[n]); break;
		case 2:
			cout << "\nвведите номер книги: ";
			cin >> n;
			std::cout << "»м€ автора книги: " << autor_name(arr[n]) << '\n'; break;
		case 3:
			cout << "\nвведите номер книги: ";
			cin >> n;
			cout << "\nкнига номер " << n << " записана в каталог" << '\n';
			save_book(arr[n], path); break;
		case 4:
			cout << "\nвпишите данные книги: ";
			add_book(arr, size);
			cout << "\n нига добавлена в каталог.'\n"; break;
		case 5:
			clear_arr(arr, n);
			cout << "\n нига удалена."; break;
		default: cout << "ќшибка ввода." << '\n';
		}
	} while (r != 6);
	
	/*cout << "¬ведите номер книги:";
	cin >> n;
	show_book(arr[n]);
	std::cout << autor_name(arr[n]);
	std::string path = "file.txt";
	save_book(arr[n], path);
	add_book(arr, size);
	show_book(arr[size]);
	clear_arr(arr, size);*/
	return 0;
}