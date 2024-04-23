#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string a = "", b = "", c = "";
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	while(a.size() < b.size()){
		a.insert(a.size(), "0");
	}
	while(b.size() < a.size()){
		b.insert(b.size(), "0");
	}
	a.insert(a.size(), "0");
	b.insert(b.size(), "0");
	for(int i = 0; i < a.size(); i ++){
		c.insert(c.size(), "0");
	}
	for(int i = 0; i < a.size(); i ++){
		int t = (int)(a[i] - 48 + b[i] - 48);
		if(t >= 10) {
			t %= 10;
			c[i + 1] = '1';
		}
		if(t == 9 && c[i] == '1'){
			c[i] = '0';
			t = 0;
			c[i + 1] = '1';
		}
		c[i] += t; 
	}
	reverse(c.begin(), c.end());
	if(c[0] == '0') c.replace(0, 1, "");
	cout << c << endl;
	return 0;
}