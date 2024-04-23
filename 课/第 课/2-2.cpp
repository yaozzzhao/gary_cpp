#include<iostream>
using namespace std;
unsigned long long int jie_cheng(int n){
	if(n <= 0){
		return 1;
	}
	return n * jie_cheng(n - 1);
}
int main(){
	int n;
	cin >> n;
	cout << jie_cheng(n) << endl;
	return 0;
}