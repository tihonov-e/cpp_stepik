//ƒана последовательность чисел, завершающа€с€ числом 0. Ќайдите сумму всех этих чисел, не использу€ цикл.
//
//‘ормат входных данных
//¬водитс€ последовательность целых чисел, оканчивающа€с€ числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончани€).
//‘ормат выходных данных
//¬ыведите ответ на задачу.
//Sample Input :
//
//1
//7
//9
//0
//Sample Output :
//
//17

#include <iostream>

using namespace std;

int sum(int a) {
    

    if (a == 0) return 0; //проверка на конец ввода
    int b = 0;
    cin >> b; //дл€ считывани€ последующих значений
    return a + sum(b); //рекурси€
}

int main()
{
    int a = 0;
    cin >> a;
    cout << sum(a);
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
