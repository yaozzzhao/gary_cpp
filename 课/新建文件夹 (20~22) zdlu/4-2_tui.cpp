#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int> > Q;
int main(){
	cin >> n;
	while (n --){
		int op;
		cin >> op;
		if (op == 1){
			int x;
			cin >> x;
			Q.push(x);
		} else if (op == 2) {
			cout << Q.top() << endl;
		} else {
			Q.pop();
		}
	}
	return 0;
}
