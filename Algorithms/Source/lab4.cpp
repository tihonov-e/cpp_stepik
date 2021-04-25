//1.12 —тандартные алгоритмы STL
/**
¬ыведите все исходные точки в пор€дке возрастани€ их рассто€ний от начала координат.

¬ходные данные
ѕрограмма получает на вход набор точек на плоскости. —начала задано количество точек n, 
затем идет последовательность из n строк, кажда€ из которых содержит два числа: координаты точки. 
¬еличина n не превосходит 100, все исходные координаты Ц целые числа, не превосход€щие 103.

¬ыходные данные
Ќеобходимо вывести все исходные точки в пор€дке возрастани€ их рассто€ний от начала координат.

Sample Input:

2
1 2
2 3
Sample Output:

1 2
2 3
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//comparator for sort() function
bool comp(pair<int, int> a, pair<int, int> b)
{
    if ((a.first * a.first + a.second * a.second) < (b.first * b.first + b.second * b.second)) return 1;
    else return 0;
}

void print(vector <pair <int, int>> a) 
{
    for (auto now : a)
    {
        cout << now.first << " " << now.second; cout << "\n";
    }
}

int main()
{
    int n = 0;
    
    cin >> n;

    //read input data
    vector <pair <int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int temp1, temp2;
        cin >> temp1; cin >> temp2;
        a[i] = { temp1, temp2 };
    }
    
    sort(a.begin(), a.end(), comp);
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
