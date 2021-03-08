﻿//https://stepik.org/lesson/13027/step/16?unit=4379&utm_medium=main%2F&utm_source=academy
//Дано число N.Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//Выведите ответ на задачу.
//Подсказка
//Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец.
//Если на эту клетку ставить ферзя нельзя(он бьет предыдущих), то такой вариант даже не 
//стоит рассматривать.Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input :
//
//8
//Sample Output :
//
//92

//1 = > 1
//2 = > 0
//3 = > 0
//4 = > 2
//5 = > 10
//6 = > 4
//7 = > 40
//8 = > 92
//9 = > 352
//10 = > 724

//метод перебор с возвратом, алгоритм "Все расстановки": 
//http://study.sfu-kras.ru/DATA/docs/ProgramTheory/recurs/queen.htm

#include <iostream>
#include <vector>
using namespace std;

int n = 0; //размерность доски

//глобальная матрица со списком решений
//столбцы которой, кроме нулевого, содержат решения задачи.
vector < vector <int> > ot(1, vector <int>(1));


//Функция qu() в рекурсивном варианте реализует алгоритм “Все расстановки”
void qu(int n, vector<int>& ho, vector<int>& du, vector<int>& dd, vector<int>& pos,
    int j, vector<vector <int> >& ot) {
    
    for (int i = 0; i <= (n - 1); i++) {
         
        //если в поз. (i,j) можно поставить ферзя
        if (ho[i + j] + du[i + j] + dd[n + i - j] == 0) {
            //поставили ферзя позицию (i, j)
            ho[i] = 1;
            du[i + j] = 1;
            dd[n + i - j] = 1;
            //если в позиции (i, j) (i, j = 0, 1, …, n-1) стоит ферзь
            pos[j] = i;
            
            //Если j < n - 1 то пытаемся в столбце j продвинуть вниз по вертикали
            //или новый(если столбец j пустой), или уже имеющийся там ферзь на 
            //ближайшую допустимую строку.
            if (j < n - 1) return qu(n, ho, du, dd, pos, j + 1, ot);
            
            //В противном случае j = n - 1, то есть все вертикали уже заняты.
            //Найденное частичное решение запоминаем в матрицу ot и возвращаемся в начало алгоритма.
            ot.push_back(pos);
            
            //Если это сделать не удалось 
            //j <- j-1, то есть снимаем ферзь со столбца j и переходим к предыдущему столбцу
            else {
                ho[i] = 0;
                du[i + j] = 0;
                dd[n + i - j] = 0;
            }


        }
        
         
        
    }

}

//Головная функция queen(n) организует обращение к рекурсивной функции qu(),
//передавая ей в качестве фактических параметров:
//n - размер доски;
//ho, du, dd, pos - начальные значения вспомогательных векторов(с нулевыми компонентами);
//j = 0 - начальное значение номера столбца текущей позиции(i, j) ферзя;
//ot - вспомогательный вектор(с нулевыми компонентами), 
//к которому последовательно будут присоединяться найденные решения.

void queen(int n) {
    
    //Введем в рассмотрение четыре вспомогательных вектора :
    //pos, ho, dd и du c длинами n, n, 2×n - 1 и 2×n - 1 соответственно.

    //pos(j) = i, если в позиции(i, j) (i, j = 0, 1, …, n - 1) стоит ферзь.
    vector<int> pos(n, 0);

    //ho(i) = 1, если на горизонтали с номером i (i = 0, 1, …, n-1) имеется ферзь, 
    //и hoi = 0 - в противном случае;
    vector<int> ho(n, 0); 

    //dd(s) = 1, если на диагонали с номером s(s = 1, 2, …, 2×n - 1), 
     //идущей слева направо и сверху вниз, имеется ферзь, и dds + 1 = 0 - в противном случае;
    vector<int> dd(2*n - 1, 0);

    //du(s) = 1, если на диагонали с номером s(s = 0, 1, …, 2×n - 2), 
    //идущей слева направо и снизу вверх, имеется ферзь, и dus = 0 - в противном случае;
    vector<int> du(2 * n - 1, 0);

    //начинаем с нулевого столбца
    int j = 0;

    qu(n, ho, du, du, ho, j, ot);
}


//функция создания пустой доски (не используется)
void createEmptyBoard(vector<vector<int>>& a) {
    int B = 0; //пустая ячейка
    int Q = 1; //ячейка с ферзем

    //заполняем матрицу нулями
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            a[i][j] = B;
        }
    }
}


int main()
{
    

    cin >> n;
    
    //создаем двумерный вектор a размерностью n*n
    vector < vector <int> > a(n, vector <int>(n)); 
    
    //изменим размер матрицы ot:
    //кол-во строк i = n; 
    //кол-во столбцов j = 1 (условно)
    ot.assign(n, vector<int>(1));

    //запуск алгоритма
    queen(n);


    //создадим пустую доску n*n
    //createEmptyBoard(a);
    
    //вывод нулевой доски 
//    for (int i = 0; i < n; i++) {       //цикл для строк i
//     for (int j = 0; j < n; j++) {   //цикл для столбцов j
//        cout << a[i][j] << " ";     //вывод по строкам
//        }
//     cout << endl;                     //перенос строки
//
//    }

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
