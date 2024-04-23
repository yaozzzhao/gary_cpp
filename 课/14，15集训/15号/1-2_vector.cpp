#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
//	vector<vector<int>> a;
	v.push_back(1);
	v.push_back(2);
	cout << v.size() << endl;
	v.insert(v.begin(), 0);
	for (int i = 0; i < v.size(); i ++){
		cout << v[i] << " ";
	}
	return 0;
}