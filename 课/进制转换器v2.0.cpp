#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;
const string v = "v2.0";
void hi(string a){
	for (int i = 0; i < a.size(); i ++){
		cout << a[i];
		Sleep(100);
	}
	return ;
}
void load(){
	hi("Loading");
	for (int i = 0; i < 6; i ++){
		cout << '.';
		Sleep(500);
	}
}
int main(){
	int num = 0, inb, outb;
	string a;
	hi("Base Converter " + v);
	cout << endl;
	hi("Input the binary i: ");
	cin >> inb;
	hi("Input the binary o: ");
	cin >> outb;
	hi("Input the number i: ");
	cin >> a;
	int n = a.size();
	for (int i = 0; i < n; i++){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			num = num * inb + a[i] - 'A' + 10;
		} else {
			num = num * inb + a[i] - '0';
		}
	}
	Sleep(100);
	system("cls");
	load();
	system("cls");
	cout << "Base Converter " + v << endl;
	cout << "Input the binary i: " << inb << endl;
	cout << "Input the binary o: " << outb << endl;
	cout << "Input the number i: " << a << endl;
	string s = "";
	while (num > 0){
		int t = num % outb;
		if (t >= 0 && t <= 9) s.insert(s.size(), 1, t + '0');
		else if (t >= 10 && t < outb) s.insert(s.size(), 1, t - 10 + 'A');
		num /= outb;
	}
	if (s.size() == 0) s = "0";
	hi("The answer is: ");
	for (int i = s.size() - 1; i >= 0; i --){
		cout << s[i];
		Sleep(100);
	}
	cout << endl;
	return 0;
}