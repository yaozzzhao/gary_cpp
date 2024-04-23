#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	map<string, int> m;
	m["zmg"] = 99;
	cout << m["zmg"] << endl;
	return 0;
}