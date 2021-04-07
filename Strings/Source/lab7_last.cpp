
//1.10 Строки и символы

/** В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
который принято записывать в виде четырех чисел, каждое из которых может принимать 
значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные
Программа получает на вход строку из произвольных символов.

Выходные данные
Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.

Примечание
Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.

Sample Input:
127.0.0.1
Sample Output:
YES
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{	

	string s = "String";
	size_t int_count = 0;
	int i_int = 0;

	/**
	Exception list for stoi():
	catch (std::invalid_argument&) 	// if no conversion could be performed
	catch (std::out_of_range&)
	*/
	
	try
	{
		i_int = stoi(s);
	}
	catch (invalid_argument&)
	{
		cerr << "Error: invalid_argument" << endl;
	}

	catch (...)
	{
		cerr << "Error: some problem" << endl;
	}

	
	cout << i_int << endl;
	
	return 0;

}

//удалить этот блок
/**	string s = ""; //main string
	string max_word = ""; //result
	string temp_word = ""; //temp string for finding a max word
	getline (cin, s); //entering the string from keyboard

	//add space in the string s end
	//for checking the last word too
	s += " ";

	size_t find_first_space = s.find(" "); // first space for starting finding

	//save the first word to max_word. It's maximum word by default
	for (int i = 0; i < find_first_space; i++) {
		max_word += s[i];
	}

	//here we save space position after the next word
	size_t find_next_space = s.find(" ", find_first_space + 1);

	//stop while cycle when reach the end of the string
	while (find_next_space != string::npos) {

		//go between two space positions: before and after the current word
		//and save letters to temp_word
		for (int i = (int) (find_first_space + 1); i < find_next_space; i++) {
			temp_word += s[i];
		}

		//check if the current word is bigger the max_word
		if (temp_word.size() > max_word.size()) max_word = temp_word;
		//reset temp_word for the next "for" cycle
		temp_word = "";

		//shift find_first_space to the right after the current word
		find_first_space = find_next_space;
		//shift the start point for finding the next space
		find_next_space = s.find(" ", find_next_space + 1);

	}

	cout << max_word; //print the result
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
