// ������
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
	cout << "1 - ������ ���������� � �����, 2 - ��� ������, 3 - ������ ����� � �������,'\n ";
	cout << "4 - ������ ����� �����, 5 - �������� �����, 6 - �����'\n";
	do {
		cout << "������� ����� �����:";
		cin >> r;
		switch (r) {
		case 1:
			cout << "\n������� ����� �����: ";
			cin >> n;

			show_book(arr[n]); break;
		case 2:
			cout << "\n������� ����� �����: ";
			cin >> n;
			std::cout << "��� ������ �����: " << autor_name(arr[n]) << '\n'; break;
		case 3:
			cout << "\n������� ����� �����: ";
			cin >> n;
			cout << "\n����� ����� " << n << " �������� � �������" << '\n';
			save_book(arr[n], path); break;
		case 4:
			cout << "\n������� ������ �����: ";
			add_book(arr, size);
			cout << "\n����� ��������� � �������.'\n"; break;
		case 5:
			clear_arr(arr, n);
			cout << "\n����� �������."; break;
		default: cout << "������ �����." << '\n';
		}
	} while (r != 6);
	
	/*cout << "������� ����� �����:";
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