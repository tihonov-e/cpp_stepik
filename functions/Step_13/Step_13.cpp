//https://stepik.org/lesson/13027/step/15?unit=4379&utm_medium=main%2F&utm_source=academy

//В небоскребе n этажей.Известно, что если уронить стеклянный шарик с этажа номер p, и 
//шарик разобьется, то если уронить шарик с этажа номер p + 1, то он тоже разобьется.
//Также известно, что при броске с последнего этажа шарик всегда разбивается.Вы хотите 
//определить минимальный номер этажа, при падении с которого шарик разбивается.
//Для проведения экспериментов у вас есть два шарика.Вы можете разбить их все, 
//но в результате вы должны абсолютно точно определить этот номер.
//Определите, какого числа бросков достаточно, чтобы заведомо решить эту задачу.
//Формат входных данных
//Программа получает на вход количество этажей в небоскребе.
//
//Формат выходных данных
//
//Требуется вывести наименьшее число бросков, при котором можно всегда решить задачу.
//
//Примечание
//
//Комментарий к первому примеру.Нужно бросить шарик со 2 - го этажа.Если он разобьется, 
//то бросим второй шарик с 1 - го этажа, а если не разобьется - то бросим шарик с 3 - го этажа.
//
//Подсказки
//
//1. Как следует действовать, если шарик был бы только один ?
//2. Пусть шариков два и мы бросили один шарик с этажа номер k.Как мы будем действовать 
//в зависимости от того, разобьется ли шарик или нет ?
//3. Пусть f(n) - это минимальное число бросков, за которое можно определить искомый этаж, 
//если бы в небоскребе было n этажей.Выразите f(n) через значения f(a) для меньших значений a.
//Sample Input 1 :
//
//    4
//    Sample Output 1 :
//
//    2
//    Sample Input 2 :
//
//    5
//    Sample Output 2 :
//
//    3

//алгоритм решения здесь: Загадка про кражу яйца Фаберже [TED-Ed] : https://www.youtube.com/watch?v=2LKYu_wqSeY

#include <iostream>

using namespace std;
int foo(int N, int n) {
    int S = 0; //сумма арифм прогресии
    
    //сумма членов арифм. прогресии
    //при подстановке an = a1 + d(n - 1) в Sn = ((a1 + an)*n)/2
    //при d = a1 = 1
    S = (n + n * n) / 2;

    if (S >= (N - 1)) return n;
    else return foo(N, n + 1);
        
}


int main()
{
    int N = 0; //кол-во этажей
    int n = 1; //мин. кол-во бросков
    cin >> N;
    
    if (N == 0 || N == 1) cout << 0; //известные решения
    
    //начинаем перебор с n-бросков
    else cout << foo(N, n);

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
