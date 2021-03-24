
//1.10 Строки и символы

//Вводится один символ, измените его регистр.То есть, если была введена 
//строчная буква - сделайте ее заглавной и наоборот.Символы, не являющиеся 
//латинской буквой, нужно выводить без изменений.
//
//Входные данные
//Вводится единственый символ.
//Выходные данные
//Выведите ответ на задачу.
//Sample Input :
//b
//Sample Output :
//B

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;

	//(c - 'a') - получаем номер порядковый номер (смещение) введенного символа c относительно 'a'
	//'A' + (c - 'a') - получаем номер заглавной буквы, соответствующей введенной маленькой
	//(char) нужно для приведения типа, иначе выведет не символ, а его номер.	
	//все это работает, т.к. все буквы идут в алфавитном порядке

	//проверка символа c и вывод результата
	if (c >= 'a' && c <= 'z') { cout << (char)('A' + (c - 'a')); } //если ввели маленькую латинскую букву
	else if (c >= 'A' && c <= 'Z') { cout << (char)('a' + (c - 'A')); } //если ввели большую латинскую букву
	else cout << c;
	
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
