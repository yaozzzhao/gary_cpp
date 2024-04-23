#include <iostream>
using namespace std;
const int N = 110;
int n, a[N];
void find(int x){
	int l = 0, r = n - 1;
	while (l < r){
		int mid = (l + r) / 2;
		if (a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	if (a[l] == x) cout << "Yes " << l << endl;
	else cout << "no no no no ! " << l << endl;
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> a[i];
	}
	int T;
	cin >> T;
	while (T --){
		int x;
		cin >> x;
		find(x);
	}
	return 0;
}
/*
11
1 4 7 10 11 13 19 20 24 27 30
*/