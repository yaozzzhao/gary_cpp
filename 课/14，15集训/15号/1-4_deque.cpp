#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> d;
	d.push_front(2);
	d.push_front(1);
	d.push_back(3);
	d.push_back(4);
	cout << d.front() << " ";
	d.pop_front();
	cout << d.back() << endl;
	d.pop_back();
	return 0;
}