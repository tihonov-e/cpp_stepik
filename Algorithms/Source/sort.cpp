//1.12 Стандартные алгоритмы STL
//Изучаем библиотеку algorithm. Вводное занятие

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**Начнём с сортировки данных.Мы уже умеем делать её вручную, с помощью сортировки выбором, а также структуры multiset.
Сегодня мы освоим ещё один, более быстрый и простой метод.
Итак, возьмём последовательность чисел, которую нужно считать, упорядочить и вывести.Вот как решается эта задача :
*/

int main()
{
    int n = 0;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    for (auto now : a) cout << now << " ";
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
