//Решаем задачи с действительными числами
//Во всех задачах этого занятия следует выводить числа с шестью знаками после точки.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <stdlib.h>     /* srand, rand */

using namespace std;

//функция решения системы линейных уравнений
void function1 (double a, double b, double c, double d, double e, double f)
{

    //double a, b, c, d, e, f;
    double x, y;
    double de, dx, dy; //определители матриц Крамера
    const double ZERO = 1e-10; //для сравнения с 0
                                //ZERO нужен, чтобы решить проблемы с точностью вычислений

    //cin >> a >> b >> c >> d >> e >> f;
    cout << setprecision (6) << fixed; //задаем точность вывода данных

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;

    // найдем определитель основной матрицы
    //[a b]
    //[c d]

    de = a * d - b * c;

    //найдем определители доп. матриц

//    dx = |e b|  dy = |a e|
//         |f d|       |c f|

    dx = e * d - b * f;
    dy = a * f - e * c;


// дальше проверяем условия

//************D = 0************************
// D != 0 => cout << 2 << x << y // есть одно единственное решение

    if (fabs(de) > ZERO) {
        fabs((dx / de)) < ZERO ? x = 0 : x = dx / de;     //если x == 0 - > x = 0, иначе x = dx/de
                                                    //для исключения вывода "-0"
        fabs((dy / de)) < ZERO ? y = 0 : y = dy / de;

        cout << 2 << " " << x << " " << y;          //2 << x << y
    }
    else

//************D = 0************************
//************Dx == 0 || Dy == 0************************

    if ( fabs(dx) < ZERO && fabs(dy) < ZERO ) {

//-------(a == b == c == d == 0)------------------------------------

        if ( fabs(a) < ZERO && fabs(b) < ZERO && fabs(c) < ZERO && fabs(d) < ZERO )   {
            if (fabs(e) > ZERO || fabs(f) > ZERO) cout << 0; //e!=0 - решений нет
            else cout << 5; //если f или e == 0 -> x,y - любые
        } else

//-------(a == 0 && c == 0)------------------------------------

        if (fabs(a) < ZERO && fabs(c) < ZERO) {
            if (fabs(b) > ZERO) y = e / b;      // b != 0
            else y = f / d;                     // b == 0

            if (fabs(y) < ZERO) y = 0;          //для исключения вывода "-0"

            cout << 4 << " " << y;              //4 << y

        } else

//-------(b == 0 && d == 0)------------------------------------

        if ( fabs(b) < ZERO && fabs(d) < ZERO ) {
            if (fabs(a) > ZERO) x = e / a;      //a != 0
            else x = f / c;                     //a ==0

            if (fabs(x) < ZERO) x = 0;          //для исключения вывода "-0"

            cout << 3 << " " << x;              //3 << x

        } else

//-------(b != 0)-----------------------------------------------

        if (fabs(b) > ZERO) {   //b!=0
            double n = e / b;
            double k = - a / b;

            cout << 1 << " " << ( (fabs(k) == 0) ? 0 : k ) << " " << ( (fabs(n) == 0) ? 0 : n );   //1 << n << k
            // тернарные операции в выводе нужны для исключения вывода "-0"
       } else {                 //b==0
            double n = f / d;
            double k = - c / d;
            cout << 1 << " " << ( (fabs(k) == 0) ? 0 : k ) << " " << ( (fabs(n) == 0) ? 0 : n );   //1 << n << k
       }
    } else cout << 0;

    cout << '\n' << '\n';
}


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

//    int n;
//    double x, a;
//    double p = 0;
//
//    cin >> n;
//    cin >> x;
//    cin >> a;
//
//    p = a;  // первоначальный результат
//
//    if (n == 0) {       //если n = 0, то P(x) = a * x^0 = a
//            cout << p;
//            return 0;   //и выходим, минуя цикл
//    }
//
//    //сюда попадем, если n>0
//    while (n != 0) {
//
//        cin >> a;
//        p = p * x + a;  //копим сумму по формуле Горнера
//        n--;
//
//    }
//
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cout << p;


//9. Даны действительные коэффициенты a, b, c, при этом a != 0 .
//Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//Вводятся три действительных числа.
//Формат выходных данных
//Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

//    double a, b, c;
//    double D, x1, x2;

//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cin >> a >> b >> c;

//    if (a == 0) return 0;       //по условию a!=0
//    if (b == 0 && c ==0) {      //a*x^2 + 0*x + 0 = 0
//            cout << 0;          // x всегда 0
//            return 0;           // выходим из программы
//    }
//
//    D = b * b - 4 * a * c;      //считаем дескриминант
//
//    if (D < 0) return 0;        //решений нет, выходим
//
//    if (D == 0) {                // при D=0 корень один
//            x1 = - b / (2 * a);
//            cout << x1;
//    } else {                    // при D>0 корней два
//
//        x1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
//        x2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
//
//        if (x1 <= x2) cout << x1 << " " << x2;
//        else cout << x2 << " " << x1;
//    }



//10. Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//Вводятся три действительных числа.
//Формат выходных данных
//Если данное уравнение не имеет корней, выведите число 0.
//Если уравнение имеет один корень, выведите число 1, а затем этот корень.
//Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания.
//Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

//    double a, b, c;
//    double D, x1, x2;
//    const double ZERO = 1e-10; //для сравнения с 0
//                                //ZERO нужен, чтобы решить проблемы с точностью вычислений
//                                //иногда 0 не ноль, а очень малое число
//
//    cout << setprecision(6) << fixed;   //вывод чисел фиксированной точностью в 6 знаков после запятой
//    cin >> a >> b >> c;
//
//    if (fabs(a) < ZERO) {               //a == 0 -> x1 = (- c) / b
//            if (fabs(b) < ZERO) {       //a == 0 && b == 0 -> нет решений
//                if (fabs(c) < ZERO) {   //a == b == c == 0 -> x = any numbers: 0*x^2 + 0*b + 0*c = 0
//
//                    cout << 3;      //выводим 3 по условию задачи
//                    return 0;
//                }
//                cout << 0;          //решений нет: 0*x^2 + 0*x + c = 0
//                return 0;
//            }
//            x1 = (- c) / b;         //если только a == 0
//            cout << 1 << " " << ((fabs(x1) < ZERO) ? 0.0f : x1) ;        //0*x^2 + b*x + c = 0
//                                                                        //(a < b) ? toDo 1 : toDo 2 - тернарный оператор
//            return 0;
//
//    }   //enf if
//
//    D = b * b - 4 * a * c;      //считаем дескриминант
//
//    if (D < 0) {
//            cout << 0;
//            return 0;        //решений нет, выходим
//    }
//
//    if (fabs(D) < ZERO) {                // при D=0 корень один
//            x1 = - b / (2 * a);
//            cout << 1 << " " << x1;
//    } else if (D > 0) {                    // при D>0 корней два
//
//        x1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a); //вычисляем корни уравнения
//        x2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
//
//        if (x1 <= x2) cout << 2 << " " << x1 << " " << x2;
//        else cout << 2 << " " << x2 << " " << x1;
//    }






//11. Даны вещественные числа a, b, c, d, e, f.
//Известно, что система линейных уравнений
//  ax + by = e
//  cx + dy = f
//
//
//имеет ровно одно решение. Выведите два числа x и y,
//являющиеся решением этой системы.
//
//Формат входных данных
//
//Вводятся шесть чисел - коэффициенты уравнений системы.
//Формат выходных данных
//Выведите ответ на задачу.
//Sample Input:
//
//1
//0
//0
//1
//3
//3
//Sample Output:
//
//3 3

// решим с помощью вычитания одного уравнения из другого
// для этого домножим первое уравнение на "c", а второе на "a",
// тем самым приравняем abs(a) и abs(c)

//Метод Крамера
//http://www.cleverstudents.ru/systems/Cramers_method.html#algorithm

//    double a, b, c, d, e, f;
//    double x, y;
//    double de, dx, dy; //определители матриц Крамера
//
//    cin >> a >> b >> c >> d >> e >> f;
//
//    // найдем определитель основной матрицы
//    //[a b]
//    //[c d]
//
//    de = a * d - b * c;
//    if (de == 0) {cout << "Error! D = 0"; return 0;} //если d == 0 - выходим с ошибкой. корней нет
//
//    //найдем определители доп. матриц
//
////    dx = |e b|  dy = |a e|
////         |f d|       |c f|
//
//    dx = e * d - b * f;
//    dy = a * f - e * c;
//
//    //найдем наконец корни
//
//    x = dx / de;
//    y = dy / de;
//
//    cout << setprecision (6) << fixed;
//    cout << x << " " << y;
//
//    return 0;
//}


//Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
//  ax + by = e
//  cx + dy = f
//
//Формат входных данных
//
//Вводятся шесть чисел - коэффициенты уравнений системы.
//Формат выходных данных
//Вывод программы зависит от вида решения этой системы.
//
//Если система не имеет решений, то программа должна вывести единственное число 0.
//
//Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.
//
//Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.
//
//Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.
//
//Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.
//
//Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.
//
//
//Решение
//Используем метод Крамера
//
//1. D == 0 && (Dx != 0 || Dy != 0) => cout << 0 // решений нет
//2. D == 0 && Dx == Dy == 0 && (a != 0 && b != 0 && c != 0 && d != 0) => cout << 1 << k << n //бесконечно решений y = kx + n
//3. D != 0 => cout << 2 << x << y // есть одно единственное решение
//4. D == 0 && Dx == Dy == 0 && (b == d == 0 && a != 0 && c != 0) => cout << 3 << x = e / a //бесконечно решений x = x0
//5. D == 0 && Dx == Dy == 0 && (a == c == 0 && b != 0 && d != 0) => cout << 4 << y = e / b //бесконечно решений y = y0
//6. D == 0 && Dx == Dy == 0 && (a == b == c == d == 0) => cout << 5  //бесконечно решений, (x,y) любые

//    function1 (1,0,0,1,3,3);
//    function1 (1,1,2,2,1,2);
//    function1 (0,2,0,4,1,2);
//    function1 (2,3,4,6,1,2);
//    function1 (0,1,0,3,5,15);
//    function1 (1,0,1,0,3,3);
//    function1 (0,1,0,2,1,1);
//    function1 (0,0,0,0,0,1);
//    function1 (0,0,0,0,1,0);
//    function1 (0,0,0,0,0,0);
//    function1 (0,1,0,-1,0,0);
//    function1 (1,-1,0,-1,1,0);
//    function1 (0,0,1,2,0,3);
//    function1 (0,0,1,-2,0,1);
//    function1 (1,-2,0,0,1,0);
//    function1 (0,0,0,1,0,1);

    function1 (1,2,3,4,-1,-1);




    return 0;
}



