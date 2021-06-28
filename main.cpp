// №1.2
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");


	char s;

	do {
		cout << "Ввод символа: ";
		cin >> s;
	} while (isdigit(s) || isalpha(s)); // проверка что не буква не цифра
	string str;
	cout << "Вввод строки: "; // ввод строки 
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == s)
		{
			cout << i + 1 << " место в строке " << endl; // поиск циклом места в строке
			return 0;
		}
	}
	cout << "Символ не найден" << endl;// если программа не прекратилась - то не найден
	return 0;







	return 0;
}