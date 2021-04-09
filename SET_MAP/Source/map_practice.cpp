
//1.11 Словари и множества
//Начало изучения
//Словари

#include <iostream>
#include <string>
#include <map>

using namespace std;

map <int, string> s;

int main()
{	
	s[102] = "ments"; 
	s[112] = "SOS";
	
	for (auto now : s) cout << now.first << " " << now.second << endl;
	
	int x = 0;
	
	cin >> x;

	if (s.find(x) != s.end()) cout << "YES\n";
	else cout << "NO\n";

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
