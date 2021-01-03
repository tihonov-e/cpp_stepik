//Возводить в степень можно гораздо быстрее, чем за n умножений!Для этого нужно воспользоваться следующими рекуррентными соотношениями :
//
//an = (a2)n / 2  при четном n,
//
//an = a × an−1 при нечетном n.
//
//Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.
//
//Формат входных данных
//Вводятся действительное число a и целое неотрицательное число n.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//2.0
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

long double power(long double a, int n) {
	if (n == 0) return 1;
	if (n == 1) return a;

	//n - четное
	if (n % 2 == 0) return power(a*a, n/2); // a^n=(a^2)^(n/2)
	//n - нечетное
	else return a * power(a, n-1); //a^n = a * a^(n-1)
}

using namespace std;

int main()
{
	long double a = 0.0;
	int n = 0;
	cin >>  a; cin >> n;
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
