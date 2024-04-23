#include <iostream>
using namespace std;
const int maxn = 10005;
bool seat[maxn] = {0};
int n, a[maxn], b[maxn], c[maxn];
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	for (int i = 1; i <= n; i ++)
		cin >> b[i];
	for (int i = 1; i <= n; i ++)
		cin >> c[i];
	
	return 0;
}