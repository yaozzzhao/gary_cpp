#include<iostream>
using namespace std;
int tongji(int n){
	if(n == 0) return 1;
	else if(n < 0) return 0;
	else {
		return tongji(n - 1) + tongji(n - 2) + tongji(n - 3);
	}
}
int main(){
	int i = -1, a[105], b[105];
	do {
		i ++;
		cin >> a[i];
		if(a[i] != 0){
			b[i] = tongji(a[i]);
		}
	}while(a[i] != 0);
	for(int j = 0; j < i; j++){
		cout << b[j] << endl;
	}
	return 0;
}