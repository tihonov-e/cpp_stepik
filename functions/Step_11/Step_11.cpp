//���� ������������������ �����, ������������� ������ 0. ������� ����� ���� ���� �����, �� ��������� ����.
//
//������ ������� ������
//�������� ������������������ ����� �����, �������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).
//������ �������� ������
//�������� ����� �� ������.
//Sample Input :
//
//1
//7
//9
//0
//Sample Output :
//
//17

#include <iostream>

using namespace std;

int sum(int a) {
    

    if (a == 0) return 0; //�������� �� ����� �����
    int b = 0;
    cin >> b; //��� ���������� ����������� ��������
    return a + sum(b); //��������
}

int main()
{
    int a = 0;
    cin >> a;
    cout << sum(a);
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
