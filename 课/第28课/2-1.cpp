#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("2-1-in.txt", "r", stdin);
	freopen("2-1-out.txt", "w", stdout);
	int t, sum = 0;
	while(cin >> t){
		sum += t;
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}