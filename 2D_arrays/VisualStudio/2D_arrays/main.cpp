//Рещаем задачи на двумерные массивы
//15/01/2020

#include <iostream>
#include <cstdlib>  //для abs()
#include <vector>   //для работы с вектором
#include <climits>  //для минимального целого
#include <iomanip>

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
//    for (int i = 0; i < n; i++) {       //цикл для строк i
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


    //int n = 0, m = 0;  //размер массива mxn (max 100)

    ////Считывание

    //cin >> n;   //считываем размер массива
    //cin >> m;

    //int a [100][100];    //создаем массив n x m

    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < m; j++) {       //цикл для столбцов j
    //        cin >> a[i][j];
    //    }
    //}

    //int j1 = 0, j2 = 0; //номера столбцов, которые надо поменять местами

    //cin >> j1;
    //cin >> j2;

    ////Обработка

    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //        //меняем местами нужные столбцы
    //        int tmp1 = a [i][j1];
    //        a[i][j1] = a[i][j2];
    //        a[i][j2] = tmp1;
    //    }


    // //Вывод
    //for (int i = 0; i < n; i++) {       //цикд для строк i
    //    for (int j = 0; j < m; j++) {   //цикл для столбцов j
    //        cout << a[i][j] << " ";     //вывод по строкам
    //    }
    //    cout << endl;                     //перенос строки

    //}



 /*   Дано число n, не превосходящее 10, и массив размером n × n.
    Проверьте, является ли этот массив симметричным относительно главной диагонали.
     Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

        Sample Input :

    3
        0 1 2
        1 2 3
        2 3 4
        Sample Output :

    YES
    
    Решение:
    Если a[i][j] == a[j][i] то матрица симметрична

    */
    //
    //int n = 0;  //размер массива n (max 10)
    //int a[10][10]; //сразу создаем массив максимального размера
    //
    // //Считывание

    //cin >> n;   //считываем размер массива

    ////считываем сам массив
    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < n; j++)          //цикл для столбцов j 
    //    {      
    //        cin >> a[i][j];
    //    }
    //}

 
    ////Обработка

    //for (int i = 1; i < n; i++) {           //цикл для строк i
    //    
    //    for (int j = 0; j < n; j++) {
    //        //Если a[i][j] == a[j][i] то матрица симметрична
    //        if (a[i][j] != a[j][i]) {     //если это не так, то выходим с "NO"
    //            cout << "NO";   //если ложь, то выводим ответ и выходим
    //            return 0;
    //        }
    //    }
    //}

    //cout << "YES";  //если мы сюда попали, то массив симметричный




 /*   Дан квадратный двумерный массив размером n × n и число k.
    Выведите элементы k - й по счету диагонали ниже главной диагонали(т.е.если k = 1, 
    то нужно вывести элементы первой диагонали, лежащей ниже главной, если k = 2, то второй диагонали и т.д.).

    Значение k может быть отрицательным, например, если k = −1, то нужно вывести значение первой диагонали 
        лежащей выше главной.Если k = 0, то нужно вывести элементы главной диагонали.

    Программа получает на вход число n, не превосходящие 10, затем массив размером n × n, затем число k.
        Программа получает на вход число n, не превосходящие 10, затем массив размером n × n, затем число k.
        Sample Input 1:

    4
        1 2 3 4
        5 6 7 8
        0 1 2 3
        4 5 6 7
        1
        Sample Output 1:

    5 1 6
        Sample Input 2 :

        4
        1 2 3 4
        5 6 7 8
        0 1 2 3
        4 5 6 7
        - 2
        Sample Output 2:

    3 8*/

    //int n = 0;  //размер массива n (max 10)
    //int k = 0;  //номер параллельной диагонали
    //int a[10][10]; //сразу создаем массив максимального размера

    // //Считывание

    //cin >> n;   //считываем размер массива

    ////считываем сам массив
    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < n; j++)          //цикл для столбцов j 
    //    {
    //        cin >> a[i][j];
    //    }
    //}

    ////считывание числа k
    //cin >> k;

    ////Вывод

    ////если k>0, то выводим элементы нижней диагонали k
    //if (k > 0) {
    //    int j = 0;  //номер первого элемента в строке для вывода
    //    //цикл для вывода матрицы по ее k-й диагонали
    //    for (int i = k; i < n; i++) {           //цикл для строк i
    //        cout << a[i][j] << " "; //выодим на экран
    //        j++;   //инкремент для номера столбца
    //    }

    //}
    ////Если k - отрицательное, то выводим элементы верхних диагоналей
    //else if (k < 0) {
    //    int j = abs(k);  //номер первого элемента в столбце для вывода
    //    //цикл для вывода матрицы по ее k-й диагонали
    //    for (int i = 0; i < (n - abs(k)); i++) {           //цикл для строк i
    //        cout << a[i][j] << " "; //выодим на экран
    //        j++;   //инкремент для номера столбца
    //    }
    //}
    ////если k = 0, то выводим главную диагональ
    //else if (k == 0) {
    //    for (int i = 0; i < n; i++) {           //цикл для строк i
    //        for (int j = 0; j < n; j++) {
    //            if (i == j) cout << a[i][j] << " ";  //на главной диагонали i = j
    //        }
    //    }
    //}

 /*       Дан двумерный массив размером n×m(n и m не превосходят 1000).
        Симметричный ему относительно главной диагонали массив называется транспонированным к данному.
        Он имеет размеры m×n : строки исходного массива становятся столбцами транспонированного, 
        столбцы исходного массива становятся строками транспонированного.

        Для данного массива постройте транспонированный массив и выведите его на экран.

            Sample Input :

        3 4
            11 12 13 14
            21 22 23 24
            31 32 33 34
            Sample Output :

            11 21 31
            12 22 32
            13 23 33
            14 24 34*/


    //int m = 0, n = 0;  //размер массива mxn (max 1000x1000) строки x столбцы
    //static int a[1000][1000]; //сразу создаем массив максимального размера для ввода
    //static int b[1000][1000]; //транспонированный массив

    // //Считывание

    //cin >> m >> n;   //считываем размер массива

    ////считываем сам массив
    //for (int i = 0; i < m; i++) {           //цикл для строк i
    //    for (int j = 0; j < n; j++)          //цикл для столбцов j 
    //    {
    //        cin >> a[i][j];
    //    }
    //}

    ////Обработка

    ////заполним строки i массива b столбцами j из массива a.
    //for (int j = 0; j < n; j++) {   //скан по столбцам массива a
    //    for (int i = 0; i < m; i++)     //скан по строкам а
    //    { 
    //        //заполним b
    //        b[j][i] = a[i][j];
    //    }
    //}

    ////вывод
    ////выводим массив b размером nxm
    //for (int i = 0; i < n; i++) {       //цикл для строк i
    //    for (int j = 0; j < m; j++) {   //цикл для столбцов j
    //        cout << b[i][j] << " ";     //вывод по строкам
    //    }
    //    cout << endl;                     //перенос строки

    //}


 /*       В кинотеатре n рядов по m мест в каждом(n и m не превосходят 20).
        В двумерном массиве хранится информация о проданных билетах, число 1 означает
        что билет на данное место уже продан, число 0 означает, 
        что место свободно.Поступил запрос на продажу k билетов на соседние места в одном ряду.
        Определите, можно ли выполнить такой запрос.

        Формат входных данных
        Программа получает на вход числа n и m.Далее идет n строк, содержащих m чисел(0 или 1), 
        разделенных пробелами.Затем дано число k.
        Формат выходных данных
        Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест.
        Если таких рядов несколько, то выведите номер наименьшего подходящего ряда.Если подходящего ряда нет, выведите число 0.

        Sample Input :

        3 4
        0 1 0 1
        1 0 0 1
        1 1 1 1
        2
        Sample Output :
        2*/

    //int n = 0, m = 0;  //размер массива mxn (max 20x20) строки x столбцы
    //int k = 0; //число билетов
    //int count = 0; //счетчик кол-ва мест в ряду подряд
    //static int a[20][20]; //сразу создаем массив максимального размера для ввода

    // //Считывание

    //cin >> n >> m;   //считываем размер массива

    ////считываем сам массив
    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < m; j++)          //цикл для столбцов j 
    //    {
    //        cin >> a[i][j];
    //    }
    //}

    ////считываем число билетов
    //cin >> k;

    //
    ////Обработка
    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < m; j++)          //цикл для столбцов j 
    //    {
    //        //если нашли 0 первый раз, то просто увеличиваем count на 1
    //        if ((a[i][j] == 0) && (count == 0)) count++;
    //        //если не в первый раз, то сравниваем с предыдущим элементом строки
    //        else if ((a[i][j] == 0) && (count > 0))
    //        {
    //            //если пред. элемент тоже 0, то count++
    //            if (a[i][j] == a[i][j - 1]) count++;
    //        }
    //        //если встретили 1 и счетчик > 1, сбрасываем его
    //        else if ((a[i][j]) != 0 && (count > 1)) count = 0;

    //        //если нашли нужное число мест, выводим ряд и выходим
    //        if (count >= k)
    //        {
    //            cout << i + 1; //+1 т.к. ряды начинаются с 1го
    //            return 0;
    //        }
    //        
    //    }
    //    count = 0; //бнуляем счетчик
    //}

    ////Вывод
    ////если мы сюда попали, значит нет k свободных мест подряд
    //cout << 0;





//Дан прямоугольный массив размером n×m.Поверните его на 90 градусов по часовой стрелке,
//        записав результат в новый массив размером m×n.
//
//        Формат входных данных
//        Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
//        Формат выходных данных
//        Выведите получившийся массив.Числа при выводе разделяйте одним пробелом.
//
//        Sample Input :
//
//        3 4
//        00 01 02 03
//        10 11 12 13
//        20 21 22 23
//        Sample Output :
//
//        20 10 00
//        21 11 01
//        22 12 02
//        23 13 03

    //int n = 0, m = 0;  //размер массива nxm (max 1000x1000) строки x столбцы
    //static int a[100][100]; //сразу создаем массив максимального размера для ввода
    //static int b[100][100]; //повернутый на 90 град. массив

    // //Считывание

    //cin >> n >> m;   //считываем размер массива

    ////считываем сам массив
    //for (int i = 0; i < n; i++) {           //цикл для строк i
    //    for (int j = 0; j < m; j++)          //цикл для столбцов j 
    //    {
    //        cin >> a[i][j];
    //    }
    //}

    ////Обработка

    ////заполним строки i массива b столбцами j из массива a.
    //// b [i][j] = a [j][n-i]
    //for (int j = 0; j < m; j++) {   //скан по столбцам массива a
    //    for (int i = 0; i < n; i++)     //скан по строкам а
    //    { 
    //        //заполним b
    //        b[j][n-1-i] = a[i][j];
    //    }
    //}

    ////вывод
    ////выводим массив b размером mxn
    //for (int i = 0; i < m; i++) {       //цикл для строк i
    //    for (int j = 0; j < n; j++) {   //цикл для столбцов j
    //        cout << b[i][j] << " ";     //вывод по строкам
    //    }
    //    cout << endl;                     //перенос строки

    //}






 /*   По данным числам n и m заполните двумерный массив размером n×m
        числами от 1 до n×m “змейкой”, как показано в примере.

        Формат входных данных
        Вводятся два числа n и m, каждое из которых не превышает 30.
        Формат выходных данных
        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

        Sample Input :

       3 5
        Sample Output :

        1   2   3   4   5
        10   9   8   7   6
        11  12  13  14  15*/

    int n = 0, m = 0;  //размер массива nxm (max 30x30) строки x столбцы
    int c = 1;          //счетчик позиции
    static int a[30][30]; //сразу создаем массив максимального размера для ввода

     //Считывание

    cin >> n >> m;   //считываем размер массива


    //Обработка

    //заполним массив а "змейкой"
    //увеличиваем счетчик c на 1 с каждым шагом

    for (int i = 0; i < n; i++) {
        //если строка нулевая или четная
        //записываем элементы слева направо, как обычно
        if (i == 0 || i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                a[i][j] = c;
                c++;
            }
        }
        
        //иначе, вводим справа налево
        else {
            for (int j = (m - 1); j >= 0; j--)
            {
                a[i][j] = c;
                c++;
            }
        }
    }
    
    //Вывод
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }






    /*По данным числам n и m заполните двумерный массив размером n×m числами 
        от 1 до n×m “диагоналями”, как показано в примере.
        Формат входных данных
        Вводятся два числа n и m, не превышающие 100.

        Формат выходных данных
        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

        Sample Input :

        3 5
        Sample Output :

        1   2   4   7  10
        3   5   8  11  13
        6   9  12  14  15*/


 /*     РЕШЕНИЕ

        1. Количество диагоналей равно n + m - 1. Пронумеруем их так, как показано на рисунке.

        2. Первый элемент в каждой диагонали имеет начальные индексы(ib, jb).

        Диагонали проходят через столбцы первой строки, поэтому вначале индексы ib равны нулю, 
        а индексы jb равны номеру диагонали, пока номер диагонали не превышает количества столбцов(точнее m - 1).
        Так меняются начальные индексы пока длина диагонали увеличивается и не убывает.

        Для каждого номера диагонали больше m - 1, jb будет равно m - 1; а индекс ib каждый раз
        будет увеличиваться на 1, т.е.длина диагонали будет уменьшаться.Мы переходим к участку, 
        лежащему ниже вспомогательной диагонали.

        3. Теперь определим индексы остальных элементов, лежащих на диагонали.
        Они изменяются по правилу : индекс строки i увеличивается на 1, индекс столбца уменьшается на 1.

        Но нельзя увеличивать i больше n - 1 (количество строк), а j уменьшать меньше нуля.
        Если достигнуто первое условие, мы дошли до нижней границы таблицы, если второе - до левой.
        Нумерация текущей диагонали должна быть прервана и осуществлен переход к следующей диагонали.*/


    
    int n = 0, m = 0;       //размер массива nxm (max 100x30) строки x столбцы
    int ib = 0, jb = 0;     //номера строки и столбца 0-го элемента диагонали
    static int a[30][30]; //сразу создаем массив максимального размера для ввода

     //Считывание

    cin >> n >> m;   //считываем размер массива

    
    //Обработка
    /*Количество диагоналей = n + m - 1
    * ib, jb -первые индексы диагоналей
    * d - номер текущей диагонали
    * Делаем первый цикл по номеру диагонали
    * Второй цикл по строкам
    * Для диагоналей с d <= (0..m-1): ib=0; jb=d; i=i+1; j=j-1; i <= n-1; j>=0
    * Для диагоналей с d > (m-1): jb=m-1; ib=ib+1; i=i+1; j=j-1
    */

    for (int d = 0; d <= (n + m - 1); d++)
    {
        //условие для диагоналей, проходящих через 0-ю строку
        if (d <= (m - 1))
        {
            //нулевые элементы текущей диагонали
            ib = 0;
            jb = d;

            for (int i = 0; i <= (n-1); i++)
            {

            }
        }
    }
    return 0;
}
