
//1.11 Словари и множества
/**
Во входной строке записана последовательность чисел через пробел. 
Для каждого числа выведите слово YES (в отдельной строке), если это 
число ранее встречалось в последовательности или NO, если не встречалось.
Входные данные
Вводится число N - количество элементов списка, а затем N чисел.
Выходные данные
Выведите ответ на задачу.
Sample Input:
6
1 2 3 2 3 4
Sample Output:

NO
NO
NO
YES
YES
NO
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{	
	set <int> s;
	int n = 0;
	cin >> n;
	
	while (cin >> n) {
		//s.insert(n).second = 1 if s already has value n
		if (s.insert(n).second) cout << "NO\n";
		else cout << "YES\n";
	}
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
