//1.12 Стандартные алгоритмы STL
/**
Отсортируйте массив.
Входные данные
Первая строка входных данных содержит количество элементов в массиве N ? 105. 
Далее идет N целых чисел, не превосходящих по абсолютной величине 109.

Выходные данные
Выведите эти числа в порядке неубывания.
Sample Input:
5
5 4 3 2 1
Sample Output:
1 2 3 4 5
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    for (auto now : a) cout << now << " ";

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
