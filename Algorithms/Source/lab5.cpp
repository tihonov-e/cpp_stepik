//1.12 Стандартные алгоритмы STL
/**
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа 
(оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. 
Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.

Sample Input:

3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:

Markov Valeriy
Petrov Petr
Sergey Petrov
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//comparator for sort() function
bool comp(pair<string, int> a, pair<string, int> b)
{
    if (b.second < a.second) return 1;
    else return 0;
}

void print(vector <pair <string, int>> a) 
{
    for (auto now : a)
    {
        cout << now.first; cout << "\n";
    }
}

int main()
{
    int n = 0;
    
    cin >> n;

    //read input data
    vector <pair <string, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        /*read name and surname*/
        string temp_s,  name;
        cin >> name; name += " "; 
        cin >> temp_s; name += temp_s;
        
        /*read the scores*/
        int temp;
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp; sum += temp;
        }
        

        a[i] = { name, sum };
    }
    
    stable_sort(a.begin(), a.end(), comp);
    print(a);
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
