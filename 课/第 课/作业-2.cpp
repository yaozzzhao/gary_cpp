#include<iostream>
#include<string>
using namespace std;
bool fa_shao(float wen){
	if(wen >= 37.5) return 1;
	else return 0;
}
int main(){
	int n, cnt;
	string name[256];
	float wen[256];
	bool ke[256];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> name[i] >> wen[i] >> ke[i];
		if(fa_shao(wen[i]) && ke[i]){
			cout << name[i] << endl;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}