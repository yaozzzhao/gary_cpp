#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> a;
int n; char t;
string check(string a, string b){
	for (int i = 1; i < min(a.size(), b.size()); i ++){
		if (a.substr(a.size() - i - 1, i) == b.substr(a.size() - i - 1, i)){
			b.replace(0, i, "");
			return a + b;
		}
	}
	return "NULL"; 
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i ++){
		string tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	cin >> t;
	for (int i = 0; i < a.size(); i ++){
		if (a.size() == 1) break;
		for (int j = 0; j < a.size(); j ++){
			if (i == j) continue;
			string t = check(a[i], a[j]);
			if (t != "NULL"){
				a.erase(a.begin() + i);
				a.erase(a.begin() + j);
				a.push_back(t);
			}
		}
	}
	cout << a[0].size() << endl;
	return 0;
}