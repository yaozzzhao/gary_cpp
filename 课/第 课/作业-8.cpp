#include<iostream>
#include<string>
using namespace std;
string da_xiao(string a){
	if(a[0] >= 'a' && a[0] <= 'z') a[0] -= 32;
	for(int i = 1; i < a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	return a;
}
void shu_chu(string a){
	for(int i = 0; i < a.size(); i++){
		cout << a[i];
	}
	return ;
}
int main(){
	string wen[100];
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		getline(cin, wen[i]);
		wen[i] = da_xiao(wen[i]);
	}
	for(int i = 0 ; i < n; i++){
		shu_chu(wen[i]);
		cout << '\n';
	}
	return 0;
}