#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	string a;
	bool c = false;
	stack<int> s;
	getline(cin, a);
	for (int i = 0; i < a.size(); i ++){
		if (a[i] == '*'){
			a[i]
		}
	}
	int i = 0, t = 0;
	while (i < a.size()){
		if (a[i] >= '0' && a[i] <= '9'){
			t = t * 10 + (int)(a[i] - 48);
		} else if (a[i] == ' '){
			if (c) {
				c = 0;
				i ++;
				continue;
			}
			s.push(t);
			t = 0;
		} else {
			int n1 = s.top(), n2, n3;
			s.pop(); n2 = s.top(); s.pop();
			if (a[i] == '+') n3 = n2 + n1;
			else if (a[i] == '-') n3 = n2 - n1;
			else if (a[i] == '*') n3 = n2 * n1;
			else n3 = n2 / n1;
			s.push(n3);
			c = 1;
		}
		i ++;
	}
	cout << s.top() << endl;
	return 0;
}