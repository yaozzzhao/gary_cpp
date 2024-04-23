#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool a = 1;
	cin >> n;
	cout << n << " = ";
	while(a){
		a = 0;
		for(int i = 2; i < n; i++){
			if(n % i == 0){
				cout << i << " * ";
				n /= i;
				a = 1;
				break;
			}
		}
	}
	cout << n << endl;
	return 0;
}