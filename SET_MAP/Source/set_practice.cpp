
//1.11 Словари и множества
//Начало изучения
//множества


#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{	
	multiset <int> s;
	int n = 0; //число запросов
	
	/**
	1 - добавить элемент множества
	2 - проверка наличия элемента в множестве
	3 - удалить элемент
	*/
	int type = 1; //тип запроса
	int x = 0; //число в запросе

	cout << "input n = "; cin >> n;
	cout << "input " << n << " members: ";
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		s.insert(x);
	}

	//print set s
	for (auto now : s) {
		cout << now << " ";
	}

	cout << "\n";
	
	cout << "command type: 1- add x; 2 - check x; 3 - delete x\n";  
	cout << "4 - print all; 5 - check size; 6 - count x  0 - exit\n";
	cout << "Enter command:\n";

	while (type != 0)
	{		
		cin >> type;

		//insert element
		if (type == 1) {
			cin >> x;
			s.insert(x); cout << x << " added";
		}

		//check element
		else if (type == 2) {
			cin >> x;
			if (s.find(x) == s.end()) cout << "NO";
			else cout << "YES";
		}

		else if (type == 3) {
			cin >> x;
			s.erase(x);  cout << x << " deleted";
		}

		else if (type == 4) {
			for (auto now : s) {
				cout << now << " ";
			}
		}

		else if (type == 5) cout << "size = " << s.size();

		else if (type == 6) {
			cin >> x;
			int cnt = 0;
			for (auto now = s.lower_bound(x); now != s.upper_bound(x); now++) {
				cnt++;
			}
			cout << " count" << "(" << x << ") =" << cnt;
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
