#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct node{
	int x, y;
	bool operator<(const node &tmp)	const{
		return x > tmp.x;
	}
};
int main(){
	priority_queue<int, vector<int>, greater<int>> q;
	q.push(1); q.push(3); q.push(2); q.push(4);
	while (!q.empty()){
		cout << q.top() << " ";
		q.pop();
	}
	return 0;
}