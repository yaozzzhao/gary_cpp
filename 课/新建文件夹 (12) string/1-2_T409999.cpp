#include <iostream>
#include <string>
using namespace std;
string s1, s2, s3;
int main(){
	getline(cin, s1);
	cin >> s2 >> s3;
	s1 = " " + s1 + " ";
	s2 = " " + s2 + " ";
	s3 = " " + s3 + " ";
	while (s1.find(s2) != string::npos)
		s1.replace(s1.find(s2), s2.size(), s3);
	s1.erase(0, 1);
	s1.erase(s1.size() - 1, 1);
	cout << s1 << endl;
	return 0;
}