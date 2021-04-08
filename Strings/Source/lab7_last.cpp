
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
	size_t num_digit = 0;
	int num = 0;

	/**
	Exception list for stoi():
	catch (std::invalid_argument&) 	// if no conversion could be performed
	catch (std::out_of_range&)
	*/
	
	//lenght of string must be between 7 and 15
	if (s.length() < 7 || s.length() > 15) {
		cout << "NO";
		return 0;
	}

	//string must have 3 x "."
	//and every byte must be between 0 and 255
	string s_byte = ""; //current byte
	int num_dots = 0; //number of dots in the string
	for (auto c : s) {
		if (c != '.') { s_byte += c; }
		else { 
			num_dots++;
			
			//check every byte
			try {
				num_dots = stoi(s);
				if (num_dots < 0 || num_dots > 255) { throw out_of_range(s); }
				else s_byte = ""; //clear temp string for the next step
			}
			catch (...) {
				cout << "NO";
				return 0;
			}

		}

	}
	
	try
	{
		num = stoi(s, &num_digit);

		if (num_digit != s.length()) { throw invalid_argument(s); }
		

	}
	catch (...)
	{
		cout << "NO";
		return 0;
	}

	
	cout << "YES";
	
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
