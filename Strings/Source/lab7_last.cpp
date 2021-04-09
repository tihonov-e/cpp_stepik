
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

	string s = ""; //string for input
	
	//count of success string-to-int symbols
	size_t num_digit = 0; //for exception checking

	
	getline(cin, s);

	//to help to work with the string
	s += '.';

	//lenght of string must be between 7 and 16
	//keep in mind extra '.'
	if (s.length() < 8 || s.length() > 16) {
		cout << "NO";
		return 0;
	}

	//string must have 3x"."
	//and every byte must be between 0 and 255
	string s_byte = ""; //current byte
	int num_byte = 0; //byte counter
	int num_dots = 0; //number of dots in the string
	
	int i = 0; //current position
	for (auto c : s) {
		 
		if (c != '.') { s_byte += c; }
		else { 
			num_dots++;
			//check ".."
			if (num_dots != 4) { //if we are not in the end
				if (s[i + 1] == '.') {
					cout << "NO";
					return 0;
				}
			}
			
			//check every byte
			try {
				num_byte = stoi(s_byte, &num_digit);
				
				//check value range
				if (num_byte < 0 || num_byte > 255) { throw out_of_range(s); }
				
				//check not integer symbols
				else if (num_digit != s_byte.length()) { throw invalid_argument(s); }
				
				//check case "001"
				else if (num_byte > 0) {
					int digits_counter = num_byte; //temp variable
					int n = 1; //result
					//finding digits count in the byte
					while ((digits_counter /= 10) > 0) n++;
					if (n != s_byte.length()) {
						cout << "NO";
						return 0;
					}
				}

				//if everything ok
				s_byte = ""; //clear temp string for the next step

				
			}
			catch (...) {
				/**
				Exception list for stoi():
				catch (std::invalid_argument&)
				catch (std::out_of_range&)
				*/
				cout << "NO";
				return 0;
			}

		}

		i++;

	}
	
	//check dots count
	//4 - because we have added extra dot later
	if (num_dots != 4) {
		cout << "NO";
		return 0;
	}

	
	cout << "YES";
	
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
