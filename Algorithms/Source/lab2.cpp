//1.12 ����������� ��������� STL
/**
� ������� �������� ��������� ����� ������� �������. 
��������, ��� ���� ���� ����� ����� ������ �� ������, ���� ��� ���� �� �� ��� ������� ������. 
� ������� ������ ����������. ��������� ����������, ����� ���������� ���������� ��� ����� ������ 
���������� ��� �������� ���, ����� �� ���� ������ �� ��� ������������.
������� ������

������� �������� ������ ���� ���������� (����� �������� ������� �� ������ �� ������), 
����� ���������� ��� ����� � �������� � ������ ������ ����.
������ � ����������� �����, �� ������������� 100, ���������� ��� ����� � �������� �� ����������� 1000.

�������� ������
�������� ������������ ����� � ������������ ���������� ��� �����.
Sample Input:
26
5
30 35 40 41 42
Sample Output:
3
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int size = 0;  
    int n = 0;
    
    cin >> size;
    cin >> n;
    if (n == 0) {
        cout << n;
        return 0;
    }
    
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    int count = 0;
    for (auto now : a) {
        if (now >= size) {
            count++;
            size = now + 3;
        }
    }
    
    cout << count;

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
