//������ ������ �� �������
//25/04/2020

#include <iostream>
#include <cstdlib>  //��� abs()
#include <vector>   //��� ������ � ��������
#include <climits>  //��� ������������ ������
#include <iomanip>

using namespace std;

//void rec() {
//    int n;
//    cin >> n;
//    if (n != 0) {
//        rec();
//        cout << n;
//    }
//}
//
//int fact(int n) {
//    if (n == 0) {
//        return 1;
//    }
//    return n * fact(n - 1);
//}



//int min(int a, int b) {
//	int c = 0; //result
//	if (a < b) c = a;
//	else c = b;
//	return c;
//}
//
//int min4(int a, int b, int c, int d) {
//
//	int x = 0; //result
//
//	x = min(min(a, b), min(c, d));
//	return x;
//}



//float distance(float x1, float y1, float x2, float y2) {
//	float result = 0;	//����� ������� = �����. ����� (.)
//	result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//
//	return result;
//}


bool IsPointInSquare(float x1, float y1) {

	return (x1 >= -1) && (x1 <= 1) && (y1 >= -1) && (y1 <= 1);
}



int main()
{
	//�������� ������� mirn(a, b), ����������� ������� ���� �����.
	//	����� �������� ������� min4(a, b, c, d), ����������� �������
	//	4 ����� � ������� ������� min.�������� ������ ����� ����� � �������� �� �������.
	//	������ ������� ������
	//	�������� ������ ����� �����.
	//	������ �������� ������
	//	�������� ����� �� ������.
	//	Sample Input :

	//	4
	//	5
	//	6
	//	7
	//	Sample Output :

	//	4

	//int a = 0, b = 0, c = 0, d = 0; //�������� �����

	//cin >> a; cin >> b; cin >> c; cin >> d;	//������ ����� � ����������

	//cout << min4(a, b, c, d);







	//	���� ������ �������������� ����� : x1, y1, x2, y2.
	//	�������� ������� distance(x1, y1, x2, y2), ����������� 
	//	���������� ����� ������(x1.y1) �(x2, y2).�������� ������ �������������� 
	//	����� � �������� ��������� ������ ���� �������.

	//	������ ������� ������
	//	�������� ������ �������������� �����.
	//	������ �������� ������
	//	�������� ����� �� ������.
	//	Sample Input :

	//	0
	//	0
	//	1
	//	1
	//	Sample Output :

	//1.41421

	//float x1, x2, y1, y2;

	//cin >> x1 >> y1 >> x2 >> y2;

	//cout << distance(x1, y1, x2, y2);






		//���� ��� �������������� ����� x � y.���������, ����������� 
		//�� ����� � ������������(x, y) ��������������� ��������(������� ��� �������).
		//���� ����� ����������� ��������, �������� ����� YES, ����� �������� ����� NO.
		//�� ������� ����� ��������� � ����� 1.
		//	������� ������ ��������� ������� IsPointInSquare(x, y), ������������ true, 
		//	���� ����� ����������� �������� � false, ���� �� �����������.�������� ��������� 
		//	������ ������� ���������� �����, ������� ������� IsPointInSquare � � ����������� 
		//	�� ������������� �������� ������� �� ����� ����������� ���������.

		//	������� IsPointInSquare �� ������ ��������� ���������� if.

		//	������ ������� ������
		//	�������� ��� �������������� �����.
		//	������ �������� ������
		//	�������� ����� �� ������.
		//	Sample Input 1:

		//	0
		//	0
		//	Sample Output 1 :

		//	YES
		//	Sample Input 2 :

		//	3
		//	- 7
		//	Sample Output 2 :

		//	NO

	
	float x1,  y1;

	cin >> x1 >> y1;

	if (IsPointInSquare (x1,y1)) cout << "YES";
	else cout << "NO";


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

