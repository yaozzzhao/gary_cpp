//2^0 ~ 2^16
//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536
//1^2 ~ 23^2
//1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400 441 484 529
#include<iostream>
using namespace std;
bool run_ping(int i){
	if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0) return 1;
	return 0;
}
int main(){
	int x, y, cnt = 0;
	cin >> x >> y;
	for(int i = x; i <= y; i++){
		if(run_ping(i)) cnt++;
	}
	cout << cnt << endl;
	return 0;
}