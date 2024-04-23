#include<iostream>
#include<string>
using namespace std;
struct student {
	int score;
	string name;
} x[100];
int main(){
	int n, maxn = 0, maxi = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x[i].score;
		if(maxn < x[i].score){
			maxn = x[i].score;
			maxi = i;
		}
		cin >> x[i].name;
	}
	cout << x[maxi].name << endl;
	return 0;
}