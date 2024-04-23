#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;
const string v = "v1.0";
string bo[10] = {"000", "001", "010", "011", "100", "101", "110", "111"};
string bh[20] = 
{"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
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
int ws(int n){
	int sum = 0;
	while (n){
		sum ++;
		n /= 10;
	}
	return sum;
}
int main(){
	int num = 0, num_;
	string inb, outb, ho, bin = "", ans = "";
	hi("Base Converter " + v);
	cout << endl;
	hi("DEC 10 BIN 2 OCT 8 HEX 16");
	cout << endl;
	hi("Input the binary i: ");
	cin >> inb;
	hi("Input the binary o: ");
	cin >> outb;
	hi("Input the number i: ");
	if (inb.compare("DEC") != 0) cin >> ho;
	else cin >> num;
	if (inb.compare("DEC") == 0){
		num_ = num;
		while (num){
			bin = (char)(num % 2 + 48) + bin;
			num /= 2;
		}
	} else if (inb.compare("OCT") == 0){
		for (int i = 0; i < ho.size(); i ++){
			bin = bin + bo[(int)(ho[i] - 48)];
		}
	} else if (inb.compare("HEX") == 0){
		for (int i = 0; i < ho.size(); i ++){
			bin = bin + bh[(int)(ho[i] - ((ho[i] >= 65) ? 65 - 10 : 48))];
		}
	} else bin = ho;
	if (outb.compare("OCT") != 0) while (bin.size() % 4 != 0) bin.insert(0, "0", 1);
	while (bin.find("0") == 0) bin.replace(0, 1, "");
	system("cls");
	load();
	system("cls");
	cout << "Base Converter " << v << endl;
	cout << "Input the binary i: " << inb << endl;
	cout << "Input the binary o: " << outb << endl;
	cout << "Input the number i: ";
	if (inb.compare("DEC") != 0) cout << ho << endl;
	else cout << num_ << endl;
	if (outb.compare("DEC") == 0){
		unsigned long long zhi = 1;
		for (int i = bin.size() - 1; i >= 0; i --){
			if ((int)(bin[i] - 48)){
				while (ans.size() <= ws(zhi)) ans.insert(0, "0", 1);
				unsigned long long tmp = zhi;
				int j = ans.size() - 1;
				while (tmp){
					ans[j] += tmp % 10;
					if (ans[j] > '9'){
						ans[j] -= 10;
						ans[j - 1] += 1;
					}
					j --;
					tmp /= 10;
				}
			}
			zhi *= 2;
		}
		while (ans.find("0") == 0) ans.replace(0, 1, "");
	} else if (outb.compare("OCT") == 0){
		while (bin.size() % 3 != 0) bin.insert(0, "0", 1);
		for (int i = 0; i < bin.size(); i += 3){
			string tmp = bin.substr(i, 3);
			for (int j = 0; j < 8; j ++){
				if (tmp.compare(bo[j]) == 0) ans = ans + (char)(j + 48);
			}
		}
	} else if (outb.compare("HEX") == 0){
		while (bin.size() % 4 != 0) bin.insert(0, "0", 1);
		for (int i = 0; i < bin.size(); i += 4){
			string tmp = bin.substr(i, 4);
			for (int j = 0; j < 16; j ++){
				if (tmp.compare(bh[j]) == 0) ans = ans + (char)(j + ((j > 9) ? 65 - 10 : 48));
			}
		}
	} else {
		while (bin.size() % 4 != 0) bin.insert(0, "0", 1);
		ans = bin;
	}
	hi("The answer is: ");
	hi(ans);
	cout << endl;
	return 0;
}