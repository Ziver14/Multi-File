#include <iostream>
#include "functions.h"
#include "Structures.hpp"
#include "Data.hpp"
int main() {
	setlocale(LC_ALL, "ru");
	int n;

	// Файл с функциями.
	/*std::cout << sum(5, 4) << std::endl;
	prime_range(7, 20);

	const int size = 3;
	int arr[size]{ 10,20,30 };
	print_arr(arr, size);*/


	//Файл со структурами
	Person p1{
		"Lara Croft",
		{20,5,1995},
		'F'
	};
	print_person(p1);

	//В отдельный файл можно вынести все то что можно распологать в глобальном пространстве
	//Области применения многофайлового проекта
	/*
	1. Сокращение объема кода в главном файле
	2. Разделение обязоностей разработчиков
	3. Создание своих библиотек
	4. Ускорение сборки
	*/

	//Файд с переменными
	_A = 7; 
	std::cout << "A = " << _A << std::endl;
	std::cout << "Pi = " << _PI<< std::endl;
	print_arr(_ARR, _SIZE);

	prime_range(10, 30);
	return 0;
}
