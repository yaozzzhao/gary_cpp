#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int main(){
//	cout << s.size() << '\n';
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++){
		int x;
		cin >> x;
		s.push(x);
//		cout << "size = " << s.size() << '\n';
	} 
	while (!s.empty())	//while (s.size())
	{
		cout << s.top() << '\n';
		s.pop();
		cout << "size = " << s.size() << '\n';
	}
	return 0;
}