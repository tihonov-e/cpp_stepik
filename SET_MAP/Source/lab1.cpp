
//1.11 Словари и множества
/**
Дан список целых чисел, который может содержать до 100000 чисел.
Определите, сколько в нем встречается различных чисел.
Входные данные
Вводится число N - количество элементов списка, а затем N чисел.
Выходные данные
Выведите ответ на задачу.
Sample Input :
5
1 2 3 2 1
Sample Output :
3
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{	
	set <int> s;
	int N = 0;
	int x = 0; //value
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> x;
		s.insert(x);
	}

	cout << s.size();

	/**
	//Супер короткое решние
	//Символ конца потока, eof, в консоли генерируется по нажатию
	//Ctrl-Z или Ctrl-D, в зависимости от ОС.
	
	while (cin >> x) {
		s.insert(x);
	}

	cout << s.size();
*/
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
