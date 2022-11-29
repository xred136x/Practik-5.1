#include<iostream>
#include <string>
#include<fstream>
#include "structs.h"

void show_book(book& P) {	
	std::cout << "\n�������� �����: " << P.name_book << "\n�����: " << P.autor;
	std::cout << "\n��� �������: " << P.year << "\n���-�� �������: " << P.number_of_pages;
	std::cout << "\n���� �� ���������: " << P.price << '\n';
}
std::string autor_name(book& P) {
	return P.autor.substr(0, P.autor.find(' '));	
}
void save_book(book& P, std::string path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << P.name_book << '\n';
		out << P.autor << '\n';
		out << P.year << '\n';
		out << P.number_of_pages << '\n';
		out << P.price << '\n';
		out.close();
	}
	else
		std::cout << "Open file error\n";
	out.close();
}
void add_book(book* P, const int len) {
	//int plen = len + 1;
	book* tmp = new book[len + 1]{};
	for (int i = 0; i < len; i++)
		tmp[i] = P[i];
	delete[]P;
	P = tmp;
	std::cout << "\n������� �������� �����: ";
	getline(std::cin, P[len].name_book);
	std::cout << "\n������� ��� � ������� ������: ";
	getline(std::cin, P[len].autor);
	std::cout << "������� ��� ������� �����: ";
	std::cin >> P[len].year;
	std::cout << "������� ���������� �������: ";
	std::cin >> P[len].number_of_pages;
	std::cout << "������� ���� �� ���������: ";
	std::cin >> P[len].price;
}
void clear_arr(book* P, int len) {
	delete[]P;
}

