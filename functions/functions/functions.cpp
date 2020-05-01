//Решаем задачи на функции
//25/04/2020

#include <iostream>
#include <cstdlib>  //для abs()
#include <vector>   //для работы с вектором
#include <climits>  //для минимального целого
#include <iomanip>

using namespace std;

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



//int min(int a, int b) {
//	int c = 0; //result
//	if (a < b) c = a;
//	else c = b;
//	return c;
//}
//
//int min4(int a, int b, int c, int d) {
//
//	int x = 0; //result
//
//	x = min(min(a, b), min(c, d));
//	return x;
//}



//float distance(float x1, float y1, float x2, float y2) {
//	float result = 0;	//длина отрезка = расст. между (.)
//	result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//
//	return result;
//}


bool IsPointInSquare(float x1, float y1) {

	return (x1 >= -1) && (x1 <= 1) && (y1 >= -1) && (y1 <= 1);
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

	//int a = 0, b = 0, c = 0, d = 0; //вводимые числа

	//cin >> a; cin >> b; cin >> c; cin >> d;	//вводим числа с клавиатуры

	//cout << min4(a, b, c, d);







	//	Даны четыре действительных числа : x1, y1, x2, y2.
	//	Напишите функцию distance(x1, y1, x2, y2), вычисляющую 
	//	расстояние между точкой(x1.y1) и(x2, y2).Считайте четыре действительных 
	//	числа и выведите результат работы этой функции.

	//	Формат входных данных
	//	Вводятся четыре действительных числа.
	//	Формат выходных данных
	//	Выведите ответ на задачу.
	//	Sample Input :

	//	0
	//	0
	//	1
	//	1
	//	Sample Output :

	//1.41421

	//float x1, x2, y1, y2;

	//cin >> x1 >> y1 >> x2 >> y2;

	//cout << distance(x1, y1, x2, y2);






		//Даны два действительных числа x и y.Проверьте, принадлежит 
		//ли точка с координатами(x, y) заштрихованному квадрату(включая его границу).
		//Если точка принадлежит квадрату, выведите слово YES, иначе выведите слово NO.
		//На рисунке сетка проведена с шагом 1.
		//	Решение должно содержать функцию IsPointInSquare(x, y), возвращающую true, 
		//	если точка принадлежит квадрату и false, если не принадлежит.Основная программа 
		//	должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости 
		//	от возвращенного значения вывести на экран необходимое сообщение.

		//	Функция IsPointInSquare не должна содержать инструкцию if.

		//	Формат входных данных
		//	Вводятся два действительных числа.
		//	Формат выходных данных
		//	Выведите ответ на задачу.
		//	Sample Input 1:

		//	0
		//	0
		//	Sample Output 1 :

		//	YES
		//	Sample Input 2 :

		//	3
		//	- 7
		//	Sample Output 2 :

		//	NO

	
	float x1,  y1;

	cin >> x1 >> y1;

	if (IsPointInSquare (x1,y1)) cout << "YES";
	else cout << "NO";


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

