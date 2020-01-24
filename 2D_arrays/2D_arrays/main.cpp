//Рещаем задачи на двумерные массивы
//15/01/2020

#include <iostream>
#include <cstdlib>  //для abs()
#include <vector>   //для работы с вектором
#include <climits>  //для минимального целого

using namespace std;


int main()
{


//Решим задачу по рисованию флага Туапсинского района
//Размер: nxn
//Диагональ - 0
//Вернхняя половина - 1
//Нижнаяя половина - 2

//
//    int n = 0;  //размер флага (max 100)
//
//    int a [100][100];    //масиив максимального размера
//
//
//    //Считывание
//
//    cin >> n;   //считываем размер массива
//
//    for (int i = 0; i < n; i++) {       //цикд для строк i
//        for (int j = 0; j < n; j++) {   //цикл для столбцов j
//            if (i == j) a [i][j] = 0;   //условие для диагонали
//            else if (i < j) a [i][j] = 1;  //условие для верхней половины
//            else if (i > j) a [i][j] = 2;  //условие для верхней половины
//        }
//    }
//
//    //вывод
//
//    for (int i = 0; i < n; i++) {       //цикд для строк i
//        for (int j = 0; j < n; j++) {   //цикл для столбцов j
//            cout << a[i][j] << " ";     //вывод по строкам
//        }
//        cout << endl;                     //перенос строки
//
//    }




//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве.
//Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны
//то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2


//    int n = 0, m = 0;  //размер массива mxn (max 100)
//    //максимальный элемент
//    //по дефолту равен минимальному INT
//    int amax = INT_MIN;
//
//    int a [100][100];    //масиив максимального размера
//    int number_max[2] {0,0};   //массив с номером максимального элемента
//
//    //Считывание
//
//    cin >> n;   //считываем размер массива
//    cin >> m;
//
//    for (int i = 0; i < n; i++) {           //цикл для строк i
//        for (int j = 0; j < m; j++) {       //цикл для столбцов j
//            cin >> a[i][j];
//        }
//    }
//
//    //Обработка
//
//    for (int i = 0; i < n; i++) {           //цикл для строк i
//        for (int j = 0; j < m; j++) {       //цикл для столбцов j
//            //ищем максимальный элемент
//            if (a[i][j] > amax) {
//                amax = a[i][j];
//                //сохраняем номер максимального элемента
//                number_max[0] = i;  //номер строки
//                number_max[1] = j;  //номер столбца
//            }
//        }
//    }
//
//
//     //Вывод
//    for (int i = 0; i < n; i++) {       //цикд для строк i
//        for (int j = 0; j < m; j++) {   //цикл для столбцов j
//            cout << a[i][j] << " ";     //вывод по строкам
//        }
//        cout << endl;                     //перенос строки
//
//    }
//
//    cout << number_max[0] << " " << number_max[1];



//    Дано нечетное число n, не превосходящее 15.
//    Создайте двумерный массив из n×n элементов,
//    заполнив его символами "." (каждый элемент массива является строкой из одного символа).
//    Затем заполните символами "*" среднюю строку массива, средний столбец массива, главную диагональ и побочную диагональ.
//    В результате "*" в массиве должны образовывать изображение звездочки.
//    Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

//Решение
//1. Заполним весь массив нулями.
//2. Найти среднюю строку и столбец массива: i = j = int (n/2). Т.к делим без остатка. Заполним 1
//2. Найдем элементы главной диагонали: i = j и заполним их 1
//3. Элементы на побочной диагонали: i + j = n + 1 и их заполним 1
//4 Выводим массив через if: 0 = "."; 1 = "*"

//    int n = 0; //размер матрицы
//
//    //Считывание
//
//    cin >> n;   //считываем размер массива
//
//    int a [n][n];   //массив размерности nxn
//
//    //заполним массив нулями. Это будут точки при выводе
//    for (int i = 0; i < n; i++) {           //цикл для строк i
//        for (int j = 0; j < n; j++) {       //цикл для столбцов j
//            a[i][j] = 0;
//        }
//    }
//
//    //Обработка
//
//    for (int i = 0; i < n; i++) {           //цикл для строк i
//        for (int j = 0; j < n; j++) {       //цикл для столбцов j
//
//            //если элемент на средней строке или среднем столбце
//            //то записываем в него 1
//            if (i == n / 2 || j == n / 2) a[i][j] = 1;
//
//            //если элемент на главной или побочной диагонали, то тоже пишем 1
//            else if (i == j || (i + j) == (n - 1)) a[i][j] = 1;
//        }
//    }
//
//    //Вывод
//    for (int i = 0; i < n; i++) {       //цикд для строк i
//        for (int j = 0; j < n; j++) {   //цикл для столбцов j
//            //если 0, то выводим точку
//            if (a[i][j] == 0) cout << ". ";
//            else cout << "* ";
//        }
//        cout << endl;                     //перенос строки
//
//    }



//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу.
//На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1.
//На следующих двух диагоналях числа 2, и т.д. Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//0 1 2 3 4
//1 0 1 2 3
//2 1 0 1 2
//3 2 1 0 1
//4 3 2 1 0

//Решение
//Находим элементы на главной диагонали (i = j) и пишем в них нули
//В остальные ячейки пишем abs(i-j). Это будет соответствовать заданию.Просто догадался.

//    int n = 0; //размер матрицы
//
//    //Считывание
//
//    cin >> n;   //считываем размер массива
//
//    int a [n][n];   //массив размерности nxn
//
//    for (int i = 0; i < n; i++) {           //цикл для строк i
//        for (int j = 0; j < n; j++) {       //цикл для столбцов j
//
//            //если элемент на главной диагонали, то пишем 0
//            if (i == j) a[i][j] = 0;
//
//            //для остальных элементов пишем разность координат
//            else a[i][j] = abs(i - j);
//        }
//    }
//
//    //Вывод
//    for (int i = 0; i < n; i++) {       //цикд для строк i
//        for (int j = 0; j < n; j++) {   //цикл для столбцов j
//            cout << a[i][j] << " ";
//        }
//        cout << endl;                     //перенос строки
//
//    }


//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100,
//затем элементы массива, затем числа i и j.
//Формат выходных данных
//Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34
//
//Решение:
//    - столбцы, которые надо поменять: j1 и j2
//    - сканируем по сторокам i и меняем местами a[i][j1]<->a[i][j2]


    int n = 0, m = 0;  //размер массива mxn (max 100)

    //Считывание

    cin >> n;   //считываем размер массива
    cin >> m;

    int a [n][m];    //создаем массив n x m

    for (int i = 0; i < n; i++) {           //цикл для строк i
        for (int j = 0; j < m; j++) {       //цикл для столбцов j
            cin >> a[i][j];
        }
    }

    int j1 = 0, j2 = 0; //номера столбцов, которые надо поменять местами

    cin >> j1;
    cin >> j2;

    //Обработка

    for (int i = 0; i < n; i++) {           //цикл для строк i
            //меняем местами нужные столбцы
            int tmp1 = a [i][j1];
            a[i][j1] = a[i][j2];
            a[i][j2] = tmp1;
        }


     //Вывод
    for (int i = 0; i < n; i++) {       //цикд для строк i
        for (int j = 0; j < m; j++) {   //цикл для столбцов j
            cout << a[i][j] << " ";     //вывод по строкам
        }
        cout << endl;                     //перенос строки

    }
    return 0;
}
