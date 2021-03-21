//Вводный урок
//1.10 Строки и символы

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	int n;
	cin >> n;
	getline(cin, s1);
	
	for (int i = 0; i < n; i++) {
		getline(cin, s1);

		string  s2 = "";
		for (auto c : s1) {
			if (c >= 'a' && c <= 'z') s2 += 'A' + (c - 'a');
			else s2 += c;
		}

	
		if (s2.find("RKPT") != -1) {
			for (auto c : s2) {
				if (c >= '0' && c <= '9') cout << c;
			}
		}

	}
	
	
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
