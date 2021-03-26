
//1.10 Строки и символы

//Дана строка, содержащая пробелы.Найдите, сколько в ней слов
//(слово – это последовательность непробельных символов, слова разделены одним пробелом, 
//первый и последний символ строки – не пробел).
//Входные данные
//На вход подается несколько строк.
//Выходные данные
//Необходимо вывести количество слов в первой из введенных строк.
//Примечание
//﻿В этой задаче может быть полезен метод find с двумя параметрами.
//Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.
//Sample Input :
//
//In the town where I was born
//Sample Output :
//7

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0; //кол-во пробелов в строке s
	
	string s;
	string s2(" ");

	getline (cin, s); //ввод строки
	
	//переменная для хранения текущей позиции пробела в строке
	size_t found = s.find(s2); 

	
	//поиск пробелов
	while (found != string::npos) { //если нашли пробел
		i++; //увеличиваем счетчик пробелов
		found = s.find(s2, found + 1); 	//смещаемся на 1 позицию влево в встроке

	}
	
	cout << i + 1; //число слов = число пробелов + 1
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
