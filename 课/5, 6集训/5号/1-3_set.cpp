#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
struct student{
	char c[100];
	int chinese, math, english;
	bool operator<(const student &y){
		if (chinese == y.chinese){
			if (math == y.math){
				return english > y.english;
			} else return math > y.math;
		} else return chinese > y.chinese;
	}
} a[10005];
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i].c >> a[i].chinese >> a[i].math >> a[i].english;
	set<student> S;
	for (int i = 1; i <= n; i ++)
		S.insert(a[i]);
	set<student>::iterator it;
	it = S.begin();
	while (it != S.end()){
		cout << it->c << " ";
		it ++;
	}
	return 0;
}