#include <iostream>
#include <algorithm>
using namespace std;
const int N = 110;
int a[N];
int main(){
	int n, avg = 0;
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> a[i];
		avg += a[i];
	}
	avg /= n;
	int cnt = 0;
	for (int i = 0; i < n - 1; i ++){
		if (a[i] == avg) continue;
		else if (a[i] > avg){
			a[i + 1] += a[i] - avg;
			cnt ++;
		}
		else if (a[i] < avg){
			a[i + 1] -= avg - a[i];
			cnt ++;
		}
	}
	cout << cnt << endl;
	return 0;
}