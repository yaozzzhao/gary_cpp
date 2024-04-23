#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5050;
int y[N];
int main(){
	int n, s, a, b;
	cin >> n >> s >> a >> b;
	int m = 0;
	for (int i = 0; i < n; i ++){
		int x, yi;
		cin >> x >> yi;
		if (x <= a + b) y[m ++] = yi;
	}
	sort(y, y + m);
	int sum = 0;
	for (int i = 0; i < m; i ++){
		if (s >= y[i]){
			s -= y[i];
			sum ++;
		} else break;
	}
	cout << sum << endl;
	return 0;
}