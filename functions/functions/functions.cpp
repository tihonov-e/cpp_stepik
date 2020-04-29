//Решаем задачи на функции
//25/04/2020

#include <iostream>
#include <cstdlib>  //для abs()
#include <vector>   //для работы с вектором
#include <climits>  //для минимального целого
#include <iomanip>

using namespace std;//

//void rec() {
//    int n;
//    cin >> n;
//    if (n != 0) {
//        rec();
//        cout << n;
//    }
//}
//
//int fact(int n) {
//    if (n == 0) {
//        return 1;
//    }
//    return n * fact(n - 1);
//}

int min(int a, int b) {
	int c = 0; //result
	if (a < b) c = a;
	else c = b;
	return c;
}

int min4(int a, int b, int c, int d) {

	int x = 0; //result

	x = min(min(a, b), min(c, d));
	return x;
}

int main()
{
	//Напишите функцию mirn(a, b), вычисляющую минимум двух чисел.
	//	Затем напишите функцию min4(a, b, c, d), вычисляющую минимум
	//	4 чисел с помощью функции min.Считайте четыре целых числа и выведите их минимум.
	//	Формат входных данных
	//	Вводятся четыре целых числа.
	//	Формат выходных данных
	//	Выведите ответ на задачу.
	//	Sample Input :

	//	4
	//	5
	//	6
	//	7
	//	Sample Output :

	//	4

	int a = 0, b = 0, c = 0, d = 0; //вводимые числа

	cin >> a; cin >> b; cin >> c; cin >> d;	//вводим числа с клавиатуры

	cout << min4(a, b, c, d);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

