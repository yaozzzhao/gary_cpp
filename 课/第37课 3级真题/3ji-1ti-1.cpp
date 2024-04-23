#include <iostream>
using namespace std;
int main(){
	int n, m, a[1010];
	cin >> n >> m;
	for(int i = 0; i < m; i ++){
		cin >> a[i];
		for(int j = 0; j < i; j ++){
			if(a[i] == a[j]){
				a[i] = 1000;
				break;
			}
		}
	}
	int flag = 0, lastflag = 0;
	for(int i = 0; i < n; i ++){
		lastflag = flag;
		for(int j = 0; j < m; j ++){
			if(a[j] == i){
				flag ++;
				break;
			}
		}
		if(flag == lastflag) cout << i << " ";
	}
	if(flag == n) cout << n << endl;
	return 0;
}