#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	char a[15];
	int shi_bei, temp = 2;
	char cshi_bei;
	cin >> a;
	shi_bei = (int)(a[0] - '0');
	for(int i = 1; i < 11; i++){
		if(a[i] == '-') continue;
		shi_bei += temp * (int)(a[i] - '0');
		temp++;
	}
	if(shi_bei % 11 == 10){
		cshi_bei = 'X';
	} else {
		cshi_bei = (char)(shi_bei % 11 + '0');
	}
	if(cshi_bei == a[12]){
		cout << "Right" << endl;
	} else {
		for(int i = 0; i < 12; i++){
			cout << a[i];
		}
		cout << cshi_bei << endl;
	}
	return 0;
}