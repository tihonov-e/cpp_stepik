
//1.11 Словари и множества
/**
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. 
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. 
Поэтому попавшийся словарь был как раз кстати.

К сожалению, для полноценного изучения языка недостаточно только одного словаря: 
кроме англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать второй словарь из первого.
Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов. 
Для каждого латинского слова, встречающегося где-либо в словаре, 
Вася предлагает найти все его переводы (то есть все английские слова, 
для которых наше латинское встречалось в его списке переводов), 
и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные
В первой строке содержится единственное целое число N — количество английских слов в словаре. 
Далее следует N описаний. Каждое описание содержится в отдельной строке, 
в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45), 
затем разделённые запятыми с пробелами переводы этого английского слова на латинский. 
Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов. 
Общее количество слов на входе не превышает 100000.

Выходные данные

В первой строке программа должна вывести количество слов в соответствующем данному 
латинско-английском словаре. Со второй строки выведите сам словарь, в точности соблюдая формат входных данных. 
В частности, первым должен идти перевод лексикографически минимального латинского слова, 
далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.

Sample Input:

3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa
Sample Output:

7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream> //for istringstream
#include <map>
#include <set>


using namespace std;

int main()
{	
	map <string, vector <string> > map_eng, map_latin;
	set <string> s_latinword;
	string word_eng, word_lat, s;
	int N = 0;

	cin >> N;
	while (N--)
	{
		//"ws" to make "getline" ignore '\n'
		cin >> word_eng >> ws; 
		getline(cin, s);
		
		//delete "," and "-"
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ',' || s[i] == '-') s.erase(i,1);
		}


		//create object is for the input stream working (>>)
		istringstream is(s);
		
		//make latin map from the string s
		while (is >> word_lat) {
			s_latinword.insert(word_lat); //make set for printing the map_latin in a right order
			map_latin[word_lat].push_back(word_eng);
		}				
	}

	//print result
	cout << map_latin.size() << endl; //number of latin words
	for (auto& now_latinword : s_latinword) { //go thru set for a right printing order
		cout << now_latinword << " - ";
		//print second value of the map
		int i = 0; //for finding the laat value of the map_latin
		for (auto& now_engword : map_latin[now_latinword]) { //go thru the map.first
			if (i != map_latin[now_latinword].size() - 1) cout << now_engword << ", "; //print ", " if it's not a last value
			else cout << now_engword;
			i++;			
		}
		cout << "\n";
	}
	
	return 0;
}
