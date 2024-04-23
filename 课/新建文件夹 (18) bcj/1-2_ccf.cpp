#include <iostream>
#include <algorithm>
using namespace std;
int n;
const int N = 2e3 + 5;
char a[N], b[N], fa[N];
char find(char x){
	if (x == fa[x])
		return x;
	return fa[x] = find(fa[x]);
}
void Merge(int x, int y){
	x = find(x), y = find(y);
	if (x == y) return ;
	fa[y] = x;
}
bool num0char(char s){
	if (s >= '0' && s <= '9')
		return 1;
	else return 0;
}
int main(){
	cin >> n;
	for (int i = 1; i <= (int)('z') + 1; i ++)
		fa[i] = i;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	for (int i = 1; i <= n; i ++)
		cin >> b[i];
	for (int i = 1; i <= n; i ++){
		int x = num0char(a[i]), y = num0char(b[i]);
		if (x == 1 && y == 1 && a[i] != b[i]){
			cout << "no" << endl;
			return 0;
		}
		if (find(a[i]) == find(b[i])) continue;
		if (num0char(find(a[i])) == 1 && num0char(find(b[i])) == 1){
			cout << "no" << endl;
			return 0;
		}
		if (num0char(find(a[i])) == 1) Merge(a[i], b[i]);
		else Merge(b[i], a[i]);
	}	
	cout << "yes" << endl;
	return 0;
}
/*
5
x y 2 y 3
x 3 x z 3
yes
*/