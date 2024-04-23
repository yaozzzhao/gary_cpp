#include <iostream>
using namespace std;
bool a[6][6] = {0};
int n, m, t, sx, sy, fx, fy;
int wow(int y, int x, char f){
	if(f == 'u') y -= 1;
	if(f == 'd') y += 1;
	if(f == 'r') x += 1;
	if(f == 'l') x -= 1;
	if(x == 0 || x > n) return 0;
	if(y == 0 || y > m) return 0;
	if(a[y][x]) return 0;
	if(x == fx && y == fy) return 1;
	a[y][x] = 1;
	return wow(x, y, 'u') + wow(x, y, 'd') + wow(x, y, 'r') + wow(x, y, 'l');
}
int main(){
	cin >> n >> m >> t;
	cin >> sy >> sx >> fy >> fx;
	for(int i = 0; i < t; i ++){
		int y, x;
		cin >> y >> x;
		a[y][x] = 1;
	}
	cout << wow(sy, sx, 'u') + wow(sy, sx, 'd') + wow(sy, sx, 'r') + wow(sy, sx, 'l') << endl;
	return 0;
}