/*
#include <iostream>
using namespace std;
int main(){
	int n, m, a[105], minn;
	cin >> n >> m;
	for (int i = 0; i < n; i ++)
		cin >> a[i];
	minn = a[0];
	for (int i = 1; i < n; i ++)
		if (minn > a[i]) minn = a[i];
	cout << m / minn << endl;
	return 0;
}

#include <cstdio>
int main(){
	double s, v, t = 0;
	scanf("%lf%lf", &s, &v);
	t += 4;
	s -= 4 * v / 2;
	t += s / v;
	printf("%.1lf", t);
	return 0;
}
*/
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
	int n, a[105];
	stack<double> s;
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i];
	sort(a, a + n, greater<int>());
	for (int i = 0; i < n; i ++)
		s.push(a[i]);
	while (s.size() - 1){
		double t = s.top();
		s.pop();
		t += s.top();
		s.pop();
		s.push(t / 2);
	}
	cout << s.top() << endl;
	return 0;
}