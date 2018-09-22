#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	// С использованием файловых и строковых потоков написать программу,
	// которая считывает текст из файла и выводит его на экран, меняя местами
	// каждые два соседних слова
	ifstream in_txt("input_en.txt");
	
	string my_s, my_s2;
	
	char c;

	while (!in_txt.eof())
	{
		in_txt >> my_s;

		if (!in_txt.eof()){

			in_txt >> my_s2;
			cout << my_s2 << " " << my_s << " "; // Да может быть пробел в конце строки
		}
		else 
		{
			cout <<  my_s;
		}				
	}
		
	// Да не закрыл файл, он закроется сам после закрытия программы
	cin >> c; // Нажать на крестик консоли
	return 0;
}