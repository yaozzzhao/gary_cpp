#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char cc[300], zq[300];
	int cc1[300] = {0}, zq1[300] = {0}, zcc[300] = {0};
	cin >> cc >> zq;
	int len1 = strlen(cc), len2 = strlen(zq), lenz = 0, x = 0;
	for(int i = len1 - 1; i >= 0; i--){
		cc1[len1 - 1 - i] = cc[i] - '0';
	}
	for(int i = len2 - 1; i >= 0; i--){
		zq1[len2 - 1 - i] = zq[i] - '0';
	}
	while(lenz < len1 || lenz < len2){
		zcc[lenz] = cc1[lenz] + zq1[lenz] + x;
		x = zcc[lenz] / 10;
		zcc[lenz] %= 10;
		lenz++;
	}
	while(zcc[lenz] == 0 && lenz > 0){
		lenz--;
	}
	for(int i = lenz; i >= 0; i--){
		cout << zcc[i];
	}
	return 0;
}
