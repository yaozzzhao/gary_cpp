#include <iostream>
#include <set>
using namespace std;
int main(){
	set<int> s;
	set<int>::iterator it;
	s.insert(3);
	s.insert(2);
	s.insert(2);
	for (it = s.begin(); it != s.end(); it ++)
		cout << (*it) << " ";
	return 0;
}