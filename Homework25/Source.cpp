#include <iostream>
#include <string>
using namespace std;

//������ 2
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

// ������ 3
int ret_char(string &W) {
	int len = W.length();	
	int counter = 0;
	for (int i = 0; i < len; i++)
		if (W[i] == '.' || W[i] == ',' || W[i] == '?' || W[i] == ' ' || W[i] == '!')
			counter++;
	return counter;
}

// ������ 4
string ret_sub_str(string &W, char C) {	
	return W.substr(W.rfind(C));
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;	

	// ������� 1
	string str = "AI will take over the world!";
	char sym;
	string res;
	cout << "������ 1.\n\'AI will take over the world!\'\n������� ������ -> ";
	cin >> sym;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << res << "\n\n";

	// ������� 2
	cout << "������ 2.\n������� ����� -> ";
	string word;
	cin >> word;
	if (word_pol(word))
		cout << "����� �������� �����������\n\n";
	else
		cout << "����� �� �������� �����������\n\n";

	// ������� 3
	cout << "������� 3.\n������� ������ -> ";	
	string stroka;
	cin.ignore();
	getline(cin, stroka);
	cout << "� ���� ������ " << ret_char(stroka) << " ��������\n\n";

	// ������� 4.
	cout << "������� 4.\n";	
	string my_str = "Hello world!";
	cout << "������: " << my_str << endl;
	cout << "������� ������ -> ";
	char symvol;
	cin >> symvol;
	cout << ret_sub_str(my_str, symvol) << endl;

	return 0;
}