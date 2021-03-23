
//1.10 Строки и символы

//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
//то выведите такую же заглавную букву.В противном случае выведите тот же символ, который был введен.
//
//Sample Input :
//
//b
//Sample Output :
//
//B

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		cout <<  (char) ('A' + (c - 'a'));
	}
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
