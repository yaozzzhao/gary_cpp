#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, k;
	int a[10001];
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				a[i] = 30001;
				break;
			}
		}
	}
	sort(a, a + n);
	if(a[k - 1] == 30001){
		cout << "NO RESULT" << endl;
		return 0;
	}
	cout << a[k - 1] << endl;
	return 0;
}