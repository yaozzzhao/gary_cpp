#include <iostream>
#include <algorithm>
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
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i ++)
		cout << a[i].c << " ";
	return 0;
}