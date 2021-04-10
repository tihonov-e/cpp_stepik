
//1.11 Словари и множества
//Начало изучения
//Словари

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;


int main()
{	

	
	//Simple using map
	/**
	map <int, string> s;
		
	s[102] = "ments";  //s[key] = {value}
	s[112] = "SOS";
	
	//print map
	for (auto now : s) cout << now.first << " " << now.second << endl;
	
	
	//find the key x
	int x = 0;
	cin >> x;
	
	if (s.find(x) != s.end()) cout << "YES\n";
	else cout << "NO\n";
	*/
	
	//vector in the map
	map <string, vector<int>> s;

	//s[key] = {value 1, value 2}
	s["first"] = { 1, 2 };

	//print
	for (auto now : s["first"]) { std::cout << now << " "; }
	cout << endl;

	//add
	string key1 = "";
	vector <int> values;
	int value1 = 0, value2 = 0;

	cout << "enter: key + values\n";
	cout << "key = "; cin >> key1;
	cout << "values: ";
	
	//collect the values from the input
	cin >> value1 >> value2;
	
	values.push_back(value1);
	values.push_back(value2);

	s[key1] = {value1, value2}; //make a new map member

	//print
	for (auto now : s[key1]) {
		cout << now << " ";
	}
	
	cout << endl;
	
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
