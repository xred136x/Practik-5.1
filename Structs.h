#pragma once

struct book {
	std::string name_book;
	std::string autor;
	int year;
	int number_of_pages;
	int price;
};

void show_book(book& P);
std::string autor_name(book& P);
void save_book(book& P, std::string path);
void add_book(book* P, const int len);
void clear_arr(book* P, int len);