#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double money(int a){
	double money_ = ceil(a / 70.0) * 0.1;
	return money_;
}
int main(){
	int n, a;
	double sum = 0;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		cin >> a;
		sum += money(a);
	}
	printf("%.1lf", sum);
	return 0;
}