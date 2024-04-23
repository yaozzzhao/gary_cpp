#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
const int N = 4;
string word[10] = {"word", "fish", "high", "blue", "bird", ""};
bool check(string b){
	for (int i = 0; i < b.size(); i ++)
		if (b[i] == 'X') return 1;
	return 0;
}
int main(){
	int number;
	srand(time(0));
	number = rand() % (N + 1) + 0;
	string a = word[number], b = "";
	cout << "welcome to dan'ci game" << endl << endl;
	for (int i = 0; i < a.size(); i ++){
		b.insert(b.size(), "X");
	}
	while (check(b)){
		cout << b << endl;
		cout << "input word or a letter : ";
		string input;
		char c;
		cin >> input;
		if (input.compare(a) == 0) {
			cout << "yes yes yes yes yes yes yes yes yes yes yes yes yes yes yes yes yes yes !" << endl;
			return 0;
		}
		if (input.size() == 1)
			c = input[0];
		else continue;
		for (int i = 0; i < a.size(); i ++)
			if (a[i] == c) {
				cout << "yes" << endl << endl;
				b[i] = c;
				break;
			}
	}
	return 0;
}