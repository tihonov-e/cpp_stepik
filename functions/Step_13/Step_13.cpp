//https://stepik.org/lesson/13027/step/15?unit=4379&utm_medium=main%2F&utm_source=academy

//� ���������� n ������.��������, ��� ���� ������� ���������� ����� � ����� ����� p, � 
//����� ����������, �� ���� ������� ����� � ����� ����� p + 1, �� �� ���� ����������.
//����� ��������, ��� ��� ������ � ���������� ����� ����� ������ �����������.�� ������ 
//���������� ����������� ����� �����, ��� ������� � �������� ����� �����������.
//��� ���������� ������������� � ��� ���� ��� ������.�� ������ ������� �� ���, 
//�� � ���������� �� ������ ��������� ����� ���������� ���� �����.
//����������, ������ ����� ������� ����������, ����� �������� ������ ��� ������.
//������ ������� ������
//��������� �������� �� ���� ���������� ������ � ����������.
//
//������ �������� ������
//
//��������� ������� ���������� ����� �������, ��� ������� ����� ������ ������ ������.
//
//����������
//
//����������� � ������� �������.����� ������� ����� �� 2 - �� �����.���� �� ����������, 
//�� ������ ������ ����� � 1 - �� �����, � ���� �� ���������� - �� ������ ����� � 3 - �� �����.
//
//���������
//
//1. ��� ������� �����������, ���� ����� ��� �� ������ ���� ?
//2. ����� ������� ��� � �� ������� ���� ����� � ����� ����� k.��� �� ����� ����������� 
//� ����������� �� ����, ���������� �� ����� ��� ��� ?
//3. ����� f(n) - ��� ����������� ����� �������, �� ������� ����� ���������� ������� ����, 
//���� �� � ���������� ���� n ������.�������� f(n) ����� �������� f(a) ��� ������� �������� a.
//Sample Input 1 :
//
//    4
//    Sample Output 1 :
//
//    2
//    Sample Input 2 :
//
//    5
//    Sample Output 2 :
//
//    3

//�������� ������� �����: ������� ��� ����� ���� ������� [TED-Ed] : https://www.youtube.com/watch?v=2LKYu_wqSeY

#include <iostream>

using namespace std;
int foo(int N, int n) {
    int S = 0; //����� ����� ���������
    
    //����� ������ �����. ���������
    //��� ����������� an = a1 + d(n - 1) � Sn = ((a1 + an)*n)/2
    //��� d = a1 = 1
    S = (n + n * n) / 2;

    if (S >= (N - 1)) return n;
    else return foo(N, n + 1);
        
}


int main()
{
    int N = 0; //���-�� ������
    int n = 1; //���. ���-�� �������
    cin >> N;
    
    if (N == 0 || N == 1) cout << 0; //��������� �������
    
    //�������� ������� � n-�������
    else cout << foo(N, n);

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
