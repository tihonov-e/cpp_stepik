//Решаем задачи на цикл while

#include <iostream>

using namespace std;

int main()
{

//1. По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//Формат входных данных
//Вводится натуральное число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//50
//Sample Output:
//1 4 9 16 25 36 49

//    int n, i = 1;
//
//    cin >> n;
//
//    while (i * i <= n) {
//
//        cout << i * i << " ";
//        i++;
//    }






//2. Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//Формат входных данных
//Вводится целое положительное число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//15
//Sample Output:
//3

//    int n, i = 2,
//
//    cin >> n;
//    int min_= n;
//
//    while (i < n) {
//
//        if (n % i == 0 && i <= min_) {
//                min_ = i;
//                i = n;
//        }
//        i++;
//   }

//       cout << min_;







//3. По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//Вводится натуральное число.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 2 4 8 16 32

//    int n, a = 1;
//
//
//    cin >> n;
//
//    while (a <= n) {
//
//        cout << a << " ";
//        a *= 2; // результат возведения 2 в степень
//    }




//4. Дано натуральное число N. Выведите слово YES,
//если число N является точной степенью двойки,
//или слово NO в противном случае.
//
//Формат входных данных
//Вводится натуральное число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//Sample Input 2:
//
//2
//Sample Output 2:
//
//YES


//    int n, i = 1, a = 1;
//
//    cin >> n;
//
//    while (a <= n) {
//
//        a *= 2; // возводим 2 в степень step by step
//
//    }
//
//    cout << a/2 << endl;    // убираем одну лишнюю стпень после while
//
//    if (a/2 == n) cout << "YES";
//    else cout << "NO";






//5. Программа получает на вход последовательность целых
//неотрицательных чисел, каждое число записано в отдельной строке.
// Последовательность завершается числом 0, при считывании которого
// программа должна закончить свою работу и вывести количество членов
// последовательности (не считая завершающего числа 0).
//Числа, следующие за числом 0, считывать не нужно.
//
//Формат входных данных
//Вводится последовательность целых чисел, заканчивающаяся числом 0.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//9
//0
//5
//Sample Output:
//
//3

//    int n, i = 0;
//
//    cin >> n;
//
//    while (n != 0) {
//        i++;
//        cin >> n;
//    }
//
//    cout << i;





//6. Определите сумму всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//Вводится последовательность целых чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//3
//6
//8
//0
//Sample Output:
//
//17


//    int n, sum = 0;
//
//    cin >> n;
//
//    while (n !=0 ) {
//        sum += n;
//        cin >> n;
//    }
//
//    cout << sum;






//7. Последовательность состоит из натуральных чисел и завершается числом 0.
//Определите значение наибольшего элемента последовательности.
//
//Формат входных данных
//Вводится последовательность целых чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//9
//
//    int n, max_value = 0;
//
//    cin >> n;
//
//    while (n != 0) {
//        if (n > max_value) max_value = n;
//        cin >> n;
//    }
//
//    cout << max_value;





//8. Последовательность состоит из натуральных чисел и завершается числом 0.
//Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
//
//Формат входных данных
//Вводится непустая последовательность целых чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//1
//7
//9
//0
//Sample Output 1:
//1
//Sample Input 2:
//1
//3
//3
//1
//0
//Sample Output 2:
//2

//     int n, i = 1, max_value = 0;
//
//     cin >> n;
//
//
//     while (n != 0) {
//        if (n > max_value) {        // найдем макс. элемент
//
//            max_value = n;
//            i = 1;          //сброс счетчика кол-ва одинаковыъ max чисел
//        }
//            cin >> n;
//
//        if (n != 0 && n == max_value) i++; //сравнение с максимальным
//
//     }
//
//    cout << i;





//9. Последовательность состоит из натуральных чисел и завершается числом 0.
//Определите значение второго по величине элемента в этой последовательности,
//то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
//
//Формат входных данных
//Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//4
//4
//2
//3
//0
//Sample Output 1:
//
//4
//Sample Input 2:
//
//2
//1
//0
//Sample Output 2:
//
//1

//    int n, second, maximum = 0;
//
//    cin >> n;
//    second = n;
//
//    while (n != 0) {
//
//        if (n >= maximum) {
//         second = maximum;
//         maximum = n;
//        }
//
//        if (n >= second && n < maximum) second = n;
//
//        cin >> n;
//
//    }
//
//    cout << second;






//10. Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, ..., F(n) = F(n-1) + F(n-2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//Вводится натуральное число N.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8


//    int n, F = 0, i = 2, x, y;
//
//    cin >> n;
//
//    // проверяем первые два члена последовательности: 0 и 1
//    // если ввели их, то выводим известные значения и выходим из программы
//
//    if (n == 0) {
//        F = 0;
//        cout << F;
//        return 0;
//
//    } else if (n == 1) {
//        F = 1;
//        cout << F;
//        return 0;}
//
//        // сюда попадем, если n >=2
//        // x и y нужны для подсчета суммы членов ряда фибоначчи
//        x = 0;
//        y = 1;
//
//    while (i <= n) {
//
//        F = x + y;      // находим число F, складывая значения членов ряда по формуле
//
//        x = y;          //сдвигаемся вперед для подсчета след. члена ряда
//        y = F;
//
//        i++;
//    }
//
//    cout << F;





//11. Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно
//является, то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи,
//выведите число -1.
//
//Формат входных данных
//Вводится натуральное число A > 1.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//8
//Sample Output:
//
//6

//
//    int a = 0;  //вводимое число
//    int i = 2;  //номер в ряду Фибоначчи
//    F = 0;      //число Фибоначчи
//    x = 1       // число (n-2) в формуле F(n)
//    y = 1;      // число (n-2) в формуле F(n)
//
//    cin >> a;
//
//    if (a <= 1) {               //число a должно быть больше 1
//        cout << "error";        // по условиям задачи
//        return 0;
//    }
//
//    // решаем основную задачу поиска номера числа
//
//    while (F < a) {
//
//        F = x + y;      // находим число F, складывая значения членов ряда по формуле
//
//        x = y;          //сдвигаемся вперед для подсчета след. члена ряда
//        y = F;
//
//        i++;            // счетчик позиции числа  в ряду
//    }
//
//    if (a == F) cout << i;  // если ввели не Фибоначчи число
//    else cout << -1;        //если ввели число Фибоначчи
//




//12. Дана последовательность натуральных чисел, завершающаяся числом 0.
//Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
//Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
//Формат входных данных
//Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит,
//а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//1
//7
//7
//9
//1
//0
//Sample Output:
//2


//    int n;
//    int n1 = 0;         //предыдущее введенное число
//    int i = 1;          //счетчик кол-ва подряд идущих чисел
//    int max_i = 0;      //максимальное значение счетчика
//
//    cin >> n;
//
//    while (n != 0) {            // основной цикл
//
//        if (n == n1) {          // если нашли два подряд
//            i = 1;              // сбрасываем счетчик
//
//            while ( n == n1) {  //ищем еще числа подряд
//                n1 = n;         // сохраняем текущее число для последующего сравнения
//                cin >> n;
//                i++;}           // увеличиваем счетчик
//
//        } else {
//
//            n1 = n;             //сюда попадаем, если не было двух подряд
//            cin >> n;}
//
//        if (i >= max_i) max_i = i;  //проверка на максимум счетчика
//    }
//
//    cout << max_i;
//




//13. Элемент последовательности называется локальным максимумом,
//если он строго больше предыдущего и последующего элемента последовательности.
//Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0.
//Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//Вводится последовательность натуральных чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//1
//2
//1
//2
//1
//0
//Sample Output:
//2


//    int n;
//    int n1;              //предыдущее число
//    bool flag1 = 0;     //признак, что введенное число больше предыдущего
//    int i = 0;          //счетчик локальных максимумов
//
//    cin >> n1;          //вводим первые два числа
//    cin >> n;
//
//    while (n != 0) {    //идем в цикл
//
//        if (n > n1) {   //если текущее число больше предыдущего
//            flag1 = 1;  //взводим флаг
//            n1 = n;     //делаем его предудущим, чтобы в будущем сравнить с введенным n
//        } else n1 = n;
//
//        cin >> n;
//
//        if (n == 0) break;      //если ввели 0, выходим из цикла
//
//        if (flag1 && n1 > n) {  //если взведен флаг И предыдущее число меньше текущего
//            i++;                // то мы нашли локальный максимум. +1 к счетчику
//            flag1 = 0;          // сбрасываем флаг
//        } else flag1 = 0;       //иначе:  локального максимума здесь нет, сбрасываем флаг
//
//
//     }
//
//    cout << i;  //выводим результат
//




//14. Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел,
//завершающейся числом 0. Если в последовательности нет двух локальных максимумов, выведите число 0.
//
//Начальное и конечное значение при этом локальными максимумами не считаются.
//
//Расстоянием считается количество пробелов между элементами. В качестве примера смотрите первый тест.
//
//Формат входных данных
//Вводится последовательность целых чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input 1:
//
//1
//2
//1
//1
//2
//1
//2
//1
//0
//Sample Output 1:
//
//2
//Sample Input 2:
//
//1
//2
//3
//0
//Sample Output 2:
//
//0

    int n;
    int n1;                 //предыдущее число
    bool flag1 = 0;         //признак, что введенное число больше предыдущего
    int i = 0;              //счетчик локальных максимумов
    int d = 0, min_d = 0;   //текущее и минимальное расст. между локальными максимумами


    cin >> n1;              //вводим первые два числа
    cin >> n;

    while (n != 0) {    //идем в цикл

        if (n > n1) {   //если текущее число больше предыдущего
            flag1 = 1;  //взводим флаг
            n1 = n;     //делаем его предудущим, чтобы в будущем сравнить с введенным n
        } else n1 = n;

        cin >> n;

        if (n == 0) break;      //если ввели 0, выходим из цикла

        if (flag1 && n1 > n) {  //если взведен флаг И предыдущее число меньше текущего
            i++;                // то мы нашли локальный максимум. +1 к счетчику
            flag1 = 0;          // сбрасываем флаг

            if (i == 2) {       //если мы сюда попали второй раз (нашли второй лок.максимум)

              min_d = d;        //расстояние между максимумами будет минимальным
              d = 0;            // сбрасываем счетчик расстояния
            }
            else if (d <= min_d) {  //если попали сюда не второй раз (1й, 3й 4й и т.п.)
                min_d = d;          //проверяем на минимум счетчик расстояния d
                d = 0;              //сброс счетчика
            } else d = 0;           //сюда попали, если d не минимальное

        } else flag1 = 0;       //иначе:  локального максимума здесь нет, сбрасываем флаг
        if (i !=0 ) d++;        //считаем расстояние, если нашли, хотя бы один лок. максимум
     }

    cout << min_d;  //выводим результат

    return 0;
}
