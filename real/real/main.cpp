//Решаем задачи с действительными числами
//Во всех задачах этого занятия следует выводить числа с шестью знаками после точки.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

//1. Дано положительное действительное число X. Выведите его дробную часть.
//
//Формат входных данных
//
//Вводятся положительное действительное число.
//
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//17.9
//Sample Output:
//
//0.9
//
//    double x, y;
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//
//    cin >> x;
//
//    y = x - trunc(x);   //число - целая часть
//
//    cout << y;





//2. Дано положительное действительное число X.
//Выведите его первую цифру после десятичной точки.
//Формат входных данных
//Вводится положительное действительное число.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//1.79
//Sample Output:
//7

//    double x, y;
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//
//    cin >> x;
//
//    y = x - trunc(x);   //дробная часть числа
//
//    cout << (int) trunc(y * 10);    //дробная часть * 10 и откидываем все после запятой


//3.Даны длины сторон треугольника.
//Вычислите площадь треугольника.
//Формат входных данных
//Вводятся три положительных числа.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//6

//сделаем по формуле Герона
//S = sqrt [p*(p - a)*(p - b)*(p - c)]
//p = (a+b+c) / 2
//
//    double a, b, c;
//    double s, p;    //площадь и полупериметр
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cin >> a >> b >> c;
//
//    p = (a + b + c)/2;                          //полупериметр
//    s = sqrt ( p * (p - a )*(p - b)*(p - c) );  //площадь
//    cout << s;
//


//4. Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года.
//Вклад составляет X рублей Y копеек. Определите размер вклада через год.
//
//
//При решении этой задачи нельзя пользоваться условными инструкциями и циклами.
//
//Формат входных данных
//Программа получает на вход целые числа P, X, Y.
//Формат выходных данных
//Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.
//Sample Input:
//
//12
//179
//0
//Sample Output:
//
//200 48

//формула расчета начислений
// начисления = P*i*t / (T*100)
//P - сумма вклада в начале года
//i - ставка в %, t - число дней вклада
// T = 365 число дней в году


//привет, друзья !
//только что получил письмо от степика с просьбой прокомментировать задачу.
//комментирую.
//я решил так.
//p, x, k - целые ( как и указано в условии ). amount ( сумма ) - double.
//две строки - вычисление и вывод.
//вычисление amount : а) подсчёт целой суммы в копейках б) преобразование результата в тип double,
//в) добавление процентов, г) отбрасывание ( как и указано в условии. не округление. ) дробной части,
//д) деление на сто ( число копеек в одном рубле ;) ). вывод amount : целая часть, пробел, дробная часть. вот, и всё !
//
//да, иногда это может казаться сложным ! да, иногда это может раздражать !
//но, пожалуйста, не бросайте !


//    int p, x ,y;
//    double kop;     //сумма в коппейках (на начало года)
//    double amount;  // сумма в рублях  с процентами
//
//    cin >> p >> x >> y;
//
//    kop = (double) x * 100 + y;                     //сумма на счету в коппейках на начало года
//    amount = (trunc (kop + kop * p/100)) / 100;     //сумма на счету в рублях на конец года
//
//    cout <<  trunc (amount) << " " << amount*100 - trunc (amount)*100;    // выводим общую сумму на счету в конце года



//5. Процентная ставка по вкладу составляет P процентов годовых,
//которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек.
//Определите размер вклада через K лет.
//Формат входных данных
//Программа получает на вход целые числа P, X, Y, K .
//Формат выходных данных
//Программа должна вывести два числа: величину вклада через K лет в рублях и копейках.
//Дробное число копеек по истечение года отбрасывается.
//Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
//Примечание
//В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
//Sample Input:
//
//12
//179
//0
//5
//Sample Output:
//
//315 43

//    int p, x ,y, k;
//    int i = 0;
//    double amount_kop = 0, amount_rub = 0;      // сумма в коп. и в рублях
//
//    cin >> p >> x >> y >> k;
//
//    amount_kop = (double) x * 100 + y;             //сумма на счету в копейках на начало года
//
//    while (i < k) {
//        amount_kop += (trunc (amount_kop * p/100));     //сумма на счету в копейках на конец каждого года
//                                                        //trunc здесь - отброс дроби копеек каждый год
//        i++;
//    }
//
//    amount_rub = (amount_kop / 100);    //переводим сумму в рубли
//
//    cout <<  trunc (amount_rub) << " " << amount_rub * 100 - trunc (amount_rub) * 100;    // выводим общую сумму на счету в конце года


//6. Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//
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
//5.66666666667

//    int n;
//    int i = 0;
//    int sum = 0;
//
//    cin >> n;
//    if (n ==0) return 0;    // если ввели 0, то выходим
//
//    while (n != 0) {
//            sum += n;       //копим сумму для среднего
//            i++;            //считаем кол-во элементов
//            cin >> n;
//
//    }
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cout << (double) sum / i;


//7. Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина
//
//где
//- среднее значение последовательности.
//Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.
//
//Формат входных данных
//
//Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит,
//а служит как признак ее окончания). В последовательности не менее двух чисел до 0.
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
//4.16333199893


//    int n;
//    int i = 0;
//    double sum = 0;
//    long double sum2 = 0; //сумма квадратов
//    double s = 0; //среднее
//    double delta = 0; //стандартное отклонение
//
//    cin >> n;
//
//    if (n ==0) return 0;    // если ввели 0, то выходим
//
//    while (n != 0) {
//            sum += n;       //копим сумму для среднего
//            sum2 += n*n;    //копим сумму квадратов
//            i++;            //считаем кол-во элементов
//            cin >> n;
//
//    }
//
//    delta = sqrt ( (sum2 - sum*sum/i)/(i - 1) );
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cout << delta;
//

//8.Дан многочлен P(x)=anxn + an−1xn−1+ ... + a1x + a0 и число x.
//Вычислите значение этого многочлена, воспользовавшись схемой Горнера:
//
//P(x)=(...(((anx + an−1)x + an−2)x + an−3) ... )x+ a0
//
//Формат входных данных
//
//Сначала программе подается на вход целое неотрицательное число n <= 20,
//затем действительное число x, затем следует n+1 вещественное число — коэффициенты многочлена от старшего к младшему.
//Формат выходных данных
//Программа должна вывести значение многочлена.
//Sample Input 1:
//
//1
//0.000
//1.000
//1.000
//Sample Output 1:
//
//1
//Sample Input 2:
//
//2
//0.500
//1.000
//1.000
//1.000
//Sample Output 2:
//
//1.75

    int n;
    double x, a;
    double p = 0;

    cin >> n;
    cin >> x;
    cin >> a;

    p = a;  // первоначальный результат

    if (n == 0) {       //если n = 0, то P(x) = a * x^0 = a
            cout << p;
            return 0;   //и выходим, минуя цикл
    }

    //сюда попадем, если n>0
    while (n != 0) {

        cin >> a;
        p = p * x + a;  //копим сумму по формуле Горнера
        n--;

    }


    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
    cout << p;

    return 0;
}




