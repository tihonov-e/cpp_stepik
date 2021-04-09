
//1.11 Словари и множества
//Начало изучения


#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{	
	set <int> s;
	int n = 0; //число запросов
	
	/**
	1 - добавить элемент множества
	2 - проверка наличия элемента в множестве
	3 - удалить элемент
	*/
	int type = 1; //тип запроса
	int x = 0; //число в запросе

	cout << "Input command format: command type value\n";
	cout << "command type: 1- add; 2 - check; 3 - delete; 0 - exit\n";
	cout << "Enter command:\n";

	while (type != 0)
	{		
		cin >> type >> x;

		if (type == 1) {
			s.insert(x);
			
			for (auto now : s) {
				cout << now << " ";
			}		
		}

		else if (type == 2) {
			if (s.find(x) != );
		}

		
		cout << "\n";
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
