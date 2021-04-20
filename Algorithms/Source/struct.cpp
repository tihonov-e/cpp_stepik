//1.12 Стандартные алгоритмы STL
//Изучаем библиотеку algorithm. Вводное занятие

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
struct man {
    int hight;
    string name;
};

bool cmp(man a, man b) {
    return a.hight < b.hight;
}

/**
Структуры

Не все сложные объекты можно описать с помощью пар. Чтобы описывать объекты, 
которые характеризуются несколькими разными значениями, нужны структуры. 
Фактически, структура — это новый тип переменных. 
Сначала нужно описать структуру, а после этого можно создавать переменные, 
вектора и прочие элементы такого типа. 
Описание структуры должно следовать сразу после using namespace std и находиться вне функций. 
Например, мы хотим описать человека при помощи двух характеристик: рост и имя.

Посмотрим полное решение задачи, в которой нужно считать информацию о людях, упорядочить их по росту и вывести имена.
*/

int main()
{
    int n = 0;
    cin >> n;
    vector <man> a(n);

    for (int i = 0; i < n; i++) {
        int temp = 0;
        string s_temp;
        cin >> temp >> s_temp;
        man struct_temp;
        struct_temp.hight = temp;
        struct_temp.name = s_temp;
        a[i] = struct_temp;
    }

    sort(a.begin(), a.end(), cmp);
    for (auto now : a) cout << now.name << " ";
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
