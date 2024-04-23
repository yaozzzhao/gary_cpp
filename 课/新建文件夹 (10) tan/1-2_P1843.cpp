#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define LL long long
using namespace std;
LL n, a, b, cnt = 0;
priority_queue<int> q;
int main(){
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i ++){
		int h;
		cin >> h;
		q.push(h);
	}
	while (q.top() - cnt * a > 0){
		int h = q.top();
		q.pop();
		q.push(h - b);
		cnt ++;
	}
	cout << cnt << endl;
	return 0;
}
