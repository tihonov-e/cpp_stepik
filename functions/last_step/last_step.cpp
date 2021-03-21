//https://stepik.org/lesson/13027/step/16?unit=4379&utm_medium=main%2F&utm_source=academy
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

//Глобальные переменные
//---------------------
//int n = 0; //размерность доски

    //pos(i) = j, если в позиции(i, j) (i, j = 0, 1, …, n - 1) стоит ферзь.
vector<int> pos;

//ho(i) = 1, если на горизонтали с номером i (i = 0, 1, …, n-1) нет ферзя, 
//и hoi = 0 - в противном случае;
vector<int> ho;

//dd(s) = 1, если на диагонали с номером s(s = 1, 2, …, 2×n - 1), 
 //идущей слева направо и сверху вниз, нет ферзя, и dds + 1 = 0 - в противном случае;
vector<int> diag_1;

//du(s) = 1, если на диагонали с номером s(s = 0, 1, …, 2×n - 2), 
//идущей слева направо и снизу вверх, нет ферзя, и dus = 0 - в противном случае;
vector<int> diag_2;


//глобальная матрица со списком решений
//столбцы которой, кроме нулевого, содержат решения задачи.
vector < vector <int> > ot(1, vector <int>(1));

//---------------------


//функция вывода двумерного вектора на экран
void print_matrix(vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {       //цикл для строк i
        for (int j = 0; j < a[i].size(); j++) {   //цикл для столбцов j
            cout << a[i][j] << " ";     //вывод по строкам
        }
        cout << endl;                     //перенос строки
    }

   
    cout << "---" << endl;
}


//функция вывода одномерного вектора на экран
void print_vector(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) { cout << a[i] << " "; }     //вывод

    cout << endl;
    cout << "---" << endl;
}


//Функция qu() в рекурсивном варианте реализует алгоритм “Все расстановки”
//i - номер строки с которой начинаем расстановку
//n - число ферзей и размер доски
void qu(int i, int n) {
    
    //запуск алгоритма. Идем вправо по столбцам
    for (int j = 0; j <= (n - 1); j++) {

        
            //если в поз. (i,j) можно поставить ферзя
        if (ho[j]==1 && diag_1[i + j] == 1 && diag_2[n + i - j] == 1 ) {
            //ставим ферзя в позицию (i, j)
            //---
            ho[j] = 0;
            diag_1[i + j] = 0;
            diag_2[n + i - j] = 0;
            pos[i] = j;
            //---
            
            //если еще не достигли последней строки, то вызываем рекурсию
            //смещаемся вниз: (i+1)
            if (i < n-1) { qu(i + 1, n); }
            
            //В противном случае все ферзи уже расставлены. Это успех.
            //Найденное частичное решение запоминаем в матрицу ot и возвращаемся в начало алгоритма.
            else {
                ot.push_back(pos);
                //print_matrix(ot);
            }
            
            //Если ферзя нельзя поставить в текущую позицию,
            //то  снимаем ферзь со строки i и переходим к предыдущей строке,
            //реализуя перебор с возвратом
            ho[j] = 1;
            diag_1[i + j] = 1;
            diag_2[n + i - j] = 1;
        }
        

    }//конец алгоритма

}//выход из процедуры


int main()
{
    int n = 0; //число ферзей

    cin >> n; 
 
    //известные случаи
    if (n == 1) { cout << 1;  return 0; }
    if (n == 2 || n == 3) { cout << 0; return 0; }
    
    
    //изменим размер векторов в соответствии с n:

    ot.assign(1, vector<int>(n)); //кол-во строк i = 1; столбцов j = n
    pos.assign(n, 0);
    ho.assign(n, 1);
    diag_1.assign(2 * n, 1);
    diag_2.assign(2 * n, 1);
    
    int i = 0; //начинаем алгоритм со строки i

    qu(i,n); //запуск алгоритма
    print_matrix(ot); // печатаем ответ
    cout << ot.size() - 1;
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
