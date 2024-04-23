#include <iostream>
using namespace std;
int n, m1[30], m2[30], m3[30], ans[15], mark = 0;
void setvalue(int x, int y, int k){
	ans[x] = y;
	m1[y] = k;
	m2[x + y] = k;
	m3[x - y + n] = k;
}
void dfs(int step){
	if (step > n){
		mark ++;
		return ;
	}
	for (int i = 1; i <= n; i ++){
		if (m1[i] || m2[step + i] || m3[step - i + n]) continue;
		setvalue(step, i, 1);
		dfs(step + 1);
		setvalue(step, i, 0);
	}
}
int main(){
	cin >> n;
	dfs(1);
	cout << mark << endl;
	return 0; 
} 