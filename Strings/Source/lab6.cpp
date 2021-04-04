
//1.10 Строки и символы

/** Найдите в данной строке самое длинное слово и выведите его.
Входные данные
Вводится одна строка. Слова в ней отделены одним пробелом.
Выходные данные
Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, 
которое встречается раньше.
Sample Input:
Everyone of us has all we need
Sample Output:
Everyone
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{	
	string s = ""; //main string
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
