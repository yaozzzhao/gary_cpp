#include <iostream>
#include <string>
using namespace std;
string s1, s2;
int main(){
	cin >> s1 >> s2;
	if (s1.size() < s2.size()){
		string s3 = s1;
		s1 = s2;
		s2 = s3;
	}
	for (int i = 0; i <= s1.size(); i ++){
		string tmp = s1.substr(0, 1);
		s1.insert(s1.size(), tmp);
		s1.erase(0, 1);
		if (s1.find(s2) != string::npos){
			cout << "true" << endl;
			return 0;
		}
	}
	cout << "false" << endl;
	return 0;
}