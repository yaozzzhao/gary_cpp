#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
//int a[100];
int main(){
//	cout << v.size() << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++){
		int x;
		cin >> x;
//		a[i] = x;
		v.push_back(x);
//		cout << "size = " << v.size() << endl;
	}
	
//	reverse(a, a + n);
//	for (int *p = a; p != a + n; p ++){
//		cout << *p << " ";
//	}
//	reverse(v.begin(), v.end());
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter ++){
//		cout << *iter << " ";
//	}
	
	sort(v.begin(), v.end(), greater<vector<int>>());
	for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); rit ++){
		cout << *rit << " ";
	}
	
//	for (int i = 0; i < v.size(); i ++){
//		cout << v[i] << " ";
//	}
//	for (int i = v.size(); i > 0; i --){
//		cout << v[i - 1] << " ";
//	}
	
//	while(!v.empty())	//while(v.size())
//	{
//		cout << "front :" << v.front() << ", back :" << v.back() << endl;
//		v.pop_back();
//		cout << "size = " << v.size() << '\n';
//	}
	return 0;
}