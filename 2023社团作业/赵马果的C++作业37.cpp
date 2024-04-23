#include<iostream>
using namespace std;
int main(){
	int a[1005],cnt = 0,n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		int sum1 = 0, sum2 = 0;
		for(int j = 0;j < i;j++){
			if(a[i] < a[j]) sum1++;
		}
		for(int j = i + 1;j < n;j++){
			if(a[i] < a[j]) sum2++;
		}
		if(sum1 == sum2) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
