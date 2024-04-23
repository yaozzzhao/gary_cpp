#include <iostream>
#include <string>
#define ULL unsigned long long
using namespace std;
const int P = 131;
ULL Hash(string s){
	ULL sum = (ULL)(s[0]);
	for (int i = 1; i < s.size(); i ++)
		sum = sum * P + (ULL)(s[i]);
	return sum;
}
int main(){
	string s;
	cin >> s;
	cout << Hash(s) << endl;
	return 0;
}
