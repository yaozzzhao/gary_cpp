#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool fu = 0;
string a = "", b = "", c = "", d = "";
void init(){
	if(a[0] == '-'){
		fu = 1 - fu;
		a.replace(0, 1, "");
	}
	if(b[0] == '-'){
		fu = 1 - fu;
		b.replace(0, 1, "");
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i = 0; i < 2001; i ++){
		c.insert(c.size(), "0");
	}
	for(int i = 0; i < b.size(); i++){
		d.insert(d.size(), "0");
	}
	return ;
}
void pluss(){
	for(int i = 0; i < a.size(); i ++){
		c[i] += (int)(a[i] - 48);
		while(c[i] > '9') {
			c[i] -= 10;
			c[i + 1] += 1;
		}
	}
	return ;
}
int main(){
	cin >> a >> b;
	if(a == "0" || b == "0"){
		cout << 0 << endl;
		return 0;
	}
	init();
	while(b.compare(d)){
		d[0] += 1;
		for(int i = 0; i < d.size(); i++){
			if(d[i] > '9'){
				d[i] -= 10;
				d[i + 1] += 1;
			}
		}
		pluss();
	}
	reverse(c.begin(), c.end());
	while(c.find("0") == 0){
		c.replace(0, 1, "");
	}
	if(fu) cout << "-";
	cout << c << endl;
	return 0;
}
