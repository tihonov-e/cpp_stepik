
//1.11 Словари и множества
/**
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. 
Все слова в словаре различны. Для одного данного слова определите его синоним.

Входные данные
Программа получает на вход количество пар синонимов N. 
Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
После этого следует одно слово.

Выходные данные
Программа должна вывести синоним к данному слову.
Sample Input:
3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:
Bye
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{	
	int N = 0;
	string key, value;
	map <string, string> s;

	cin >> N; 
	while (N--) {
		cin >> key; cin >> value;
		s[key] = {value};
	}
	cin >> value;
	
	for (auto& now : s) {
		if (value == now.first) cout << now.second;
		else if (value == now.second) cout << now.first;
	}

	return 0;
}
