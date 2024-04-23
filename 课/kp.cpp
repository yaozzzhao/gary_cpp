#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 5;
int n, a[N];
void kuai(int l, int r){
	if (l >= r) return ;
	int mid = (l + r) >> 1, mvi = 0;
	vector<int> tmp;
	tmp.push_back(a[mid]);
	for (int i = l; i <= r; i ++){
		if (i == mid) continue;
		if (a[i] < a[mid]){
			tmp.insert(tmp.begin(), a[i]);
			mvi ++;
		} else {
			tmp.push_back(a[i]);
		}
	}
	for (int i = 0; i < tmp.size(); i ++)
		a[l + i] = tmp[i];
	kuai(l, l + mvi);
	kuai(l + mvi + 1, r);
	return ;
}
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	kuai(1, n);
	for (int i = 1; i <= n; i ++)
		cout << a[i] << " ";
	cout << '\n';
	return 0;
}