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
Перестановки

Необходимость получить все перестановки в последовательности и выбрать среди них наилучшую возникает очень часто. 
В C++ есть встроенная функция, которая позволяет из последовательности, содержащей перестановку чисел, 
получить следующую перестановку. Например, за перестановкой 1, 2, 3 идёт перестановка 1, 3, 2, затем 2, 1, 3 и так далее. 
Функция называется next_permutation и принимает на вход два параметра: начало и конец последовательности, 
содержащей перестановку. Next_permutation изменяет порядок значений в последовательности, 
а также возвращает логическое значение. Обычно это истина — кроме случая, когда все элементы уже стоят в убывающем порядке, 
и следующей перестановки просто нет. Тогда функция переставляет элементы в возрастающем порядке и возвращает ложь.

Например, такая программа сначала заполняет последовательность из N чисел числами от 1 до N по возрастанию, 
а затем генерирует все возможные перестановки и выводит их:
*/

int main()
{
    int n = 0;
    cin >> n;
    vector <man> a(n);
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
