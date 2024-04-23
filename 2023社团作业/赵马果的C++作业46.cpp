#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, a, maxb, j = 30000;
	int b[30001] = {0}, b_[30001];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		b[a] ++;
	}
	for(int i = 0; i <= 30000; i++){
		b_[i] = i;
	}
	bool flag = 1;
	while(flag){
		flag = 0;
		for(int i = 0; i < 30000; i++){
			if(b[i] > b[i + 1]){
				swap(b[i], b[i + 1]);
				swap(b_[i], b_[i + 1]);
				flag = 1;
				break;
			}
		}
	}
	maxb = b[30000];
	while(b[j] == maxb){
		j --;
	}
	for(int i = j + 1; i <= 30000; i++){
		cout << b_[i] << " " << b[i] << endl;
	}
	return 0;
}