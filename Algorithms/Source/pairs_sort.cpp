//1.12 ����������� ��������� STL
//������� ���������� algorithm. ������� �������

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/**���������� ���

����� ����� ��������� ������������� ���� ���������. �� ��� ����������� � ������ �� ����� �������� ��������, 
� ������ ����������� �� ��� ���������. ��� �� ������������� ����� ���������� ���������� utility.

��������, �� ����� ������������� ���� ������ � ����� � �������� ������������������. 
� �������� ������ ����� ������� ������� ��������������� ��������� � �������� �������.
*/

int main()
{
    int n = 0;
    cin >> n;
    vector <pair <int, int>> a(n);

    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        a[i] = { temp, i };
    }

    sort(a.begin(), a.end());
    for (auto now : a) cout << now.second << " ";
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
