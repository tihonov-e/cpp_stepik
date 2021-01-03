//Дано действительное положительное число a и целоe число n.
//
//Вычислите an.Решение оформите в виде рекурсивной функции power(a, n).
//
//Формат входных данных
//Вводится действительное положительное число a и целоe число n.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//2
//1
//Sample Output 1 :
//
//	2
//	Sample Input 2 :
//
//	2
//	2
//	Sample Output 2 :
//
//	4

#include <iostream>
#include <cstdlib>  //для abs()


float power(float a, int n) {
	if (n == 0) return 1;
	if (n > 0) return a * power(a, n - 1);
	if (n < 0) return (1/a) * power(a, n + 1);
}

using namespace std;

int main()
{
	float a;
	int n;
	cin >> a; cin >> n;

	cout << power(a, n);
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
