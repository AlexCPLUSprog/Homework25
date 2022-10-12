#include <iostream>
#include <string>
using namespace std;

//Задача 2
bool word_pol(string &W) {
	int len = W.length();
	for (int i = 0; i < len; i++)
		W[i] = tolower(W[i]);
	for (int i = 0; i < len / 2; i++){		
		if (W[i] != W[len - i - 1])	{
			return false;
		}
	}
	return true;
}

// Задача 3
int ret_char(string &W) {
	int len = W.length();	
	int counter = 0;
	for (int i = 0; i < len; i++)
		if (W[i] == '.' || W[i] == ',' || W[i] == '?' || W[i] == ' ' || W[i] == '!')
			counter++;
	return counter;
}

// Задача 4
string ret_sub_str(string &W, char C) {	
	return W.substr(W.rfind(C));
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;	

	// Задание 1
	string str = "AI will take over the world!";
	char sym;
	string res;
	cout << "Задача 1.\n\'AI will take over the world!\'\nВведите символ -> ";
	cin >> sym;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << res << "\n\n";

	// Задание 2
	cout << "Задача 2.\nВведите слово -> ";
	string word;
	cin >> word;
	if (word_pol(word))
		cout << "Слово является полиндромом\n\n";
	else
		cout << "Слово не является полиндромом\n\n";

	// Задание 3
	cout << "Задание 3.\nВведите строку -> ";	
	string stroka;
	cin.ignore();
	getline(cin, stroka);
	cout << "В этой строке " << ret_char(stroka) << " символов\n\n";

	// Задание 4.
	cout << "Задание 4.\n";	
	string my_str = "Hello world!";
	cout << "Строка: " << my_str << endl;
	cout << "Введите символ -> ";
	char symvol;
	cin >> symvol;
	cout << ret_sub_str(my_str, symvol) << endl;

	return 0;
}