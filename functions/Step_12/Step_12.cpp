//Напишите функцию fib(n), которая по данному целому положительному n возвращает n - e число Фибоначчи.
//В этой задаче нельзя использовать циклы - используйте рекурсию.
//Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.
//Формат входных данных
//Вводится целое число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input :
//
//1
//Sample Output :
//
//1

#include <iostream>

using namespace std;

int fib(int n) {
    //Если n = 1 или n = 2, вернуть в вызывающую ветку единицу, 
    //так как первый и второй элементы ряда Фибоначчи равны единице.
    if (n == 1 || n == 2) return 1;
    //Во всех остальных случаях вызвать эту же функцию с аргументами 
    //n - 1 и n - 2. Результат двух вызовов сложить и вернуть в вызывающую ветку программы.
    else return fib(n - 1) + fib(n - 2);
}


int main()
{
    int n = 0;
    cin >> n;
    cout << fib(n);

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
