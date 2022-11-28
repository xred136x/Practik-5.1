// шаблон
#include<iostream>
#include <string>
#include<fstream>
#include "structs.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3, n;
	book* arr = new book[size];

	arr[0] = {"avatar", "Tim Robins", 1949, 555, 1000 };
	arr[1] = { "Conan", "Tom Rogers", 1975, 777, 1000 };
	arr[2] = { "Rambo", "John Colins",1985, 200, 200 };
	
	cout << "¬ведите номер книги:";
	cin >> n;
	show_book(arr[n]);
	std::cout << autor_name(arr[n]);
	std::string path = "file.txt";
	save_book(arr[n], path);
	add_book(arr, size);
	clear_arr(arr, size);
	return 0;
}