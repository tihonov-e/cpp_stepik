
//1.11 Словари и множества
/**
﻿Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.

Входные данные
Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
Выходные данные
Выведите ответ на задачу.
Sample Input:
3
1 3 2
3
4 3 2
Sample Output:
2
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{	
	set <int> s1, s2;
	int n = 0;
	int x = 0;
	int cnt = 0; //result
	
	//make the 1st set
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		s1.insert(x);
	}

	//make the 2nd set
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		s2.insert(x);
	}

	for (auto now : s2) {
		if (s1.find(now) != s1.end()) cnt++;
	}

	cout << cnt;
	return 0;
}


//супер компактный способ
//#include <iostream>
//#include <set>
//using namespace std;
//int main(void) {
//	int N, M, tmp, cnt = 0;
//	set <int> sN;
//	cin >> N; while (N-- && cin >> tmp) sN.insert(tmp);
//	cin >> M; while (M-- && cin >> tmp) if (!sN.insert(tmp).second) cnt++;
//	cout << cnt << endl;
//	return 0;
//}
