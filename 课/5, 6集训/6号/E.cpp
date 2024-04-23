#include <iostream>
#include <string>
using namespace std;
int n, lr[30], rr[30], fm[30], y;
void f(int i){
	cout << (char)(i + 96);
	if (lr[i] != 0) f(lr[i]);
	if (rr[i] != 0) f(rr[i]);
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i ++){
		string t;
		cin >> t;
		if (i == 0) y = (int)(t[0] - 96);
		if (t[1] != '*'){
			lr[(int)(t[0] - 96)] = (int)(t[1] - 96);
			fm[(int)(t[1] - 96)] = (int)(t[0] - 96);
		}
		if (t[2] != '*'){
			rr[(int)(t[0] - 96)] = (int)(t[2] - 96);
			fm[(int)(t[2] - 96)] = (int)(t[0] - 96);
		}
	}
	f(y);
	return 0;
}