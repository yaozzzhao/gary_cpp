#include <iostream>
#include <queue>
using namespace std;
queue<int> s;
int main(){
//	cout << s.size() << endl;
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++){
		int x;
		cin >> x;
		s.push(x);
//		cout << "size = " << s.size() << endl;
//		cout << "front :" << s.front() << ", back :" << s.back() << endl;
	}
	while (!s.empty())	//while(s.size())
	{
//		cout << "size = " << s.size() << endl;
//		cout << "front :" << s.front() << ", back :" << s.back() << endl;
		cout << s.front() << '\n';
		s.pop();
	}
	return 0;
}