//Дано натуральное число n > 1. Проверьте, является ли оно простым.Программа должна вывести слово YES, если число простое и NO, если число составное.
//Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел.Количество операций в программе 
//должно быть пропорционально корню из n.
//Формат входных данных
//Вводится натуральное число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//2
//Sample Output 1 :
//
//	YES
//	Sample Input 2 :
//
//	4
//	Sample Output 2 :
//
//	NO

#include <iostream>
#include <cmath>

int MinDivisor(int n) {
	for (int i = 2, isqrt = sqrt(n); i <= isqrt; i++) {
		if (n % i == 0) return i;	
	}
	return n;
}
//у простого числа n  мин.делитель = n
bool IsPrime(int n){
	if (MinDivisor(n) == n) return true;
	else return false;
}

using namespace std;

int main()
{
	int n = 0;
	cin >>  n;
	if (IsPrime(n)) cout << "YES";
	else cout << "NO";

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
