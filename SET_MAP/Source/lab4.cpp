
//1.11 Словари и множества
/**
﻿Даны два списка чисел, которые могут содержать до 100000 чисел каждый.  
Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.

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

2 3
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{	
	int N, M, tmp, cnt = 0;
	set <int> sN, sRes;
	cin >> N; while (N-- && cin >> tmp) sN.insert(tmp);
	cin >> M; while (M-- && cin >> tmp) if (!sN.insert(tmp).second) sRes.insert(tmp);
	
	for (auto now : sRes) cout << now << " ";

	return 0;
}
