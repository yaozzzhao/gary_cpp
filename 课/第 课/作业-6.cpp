#include<iostream>
#include<string>
using namespace std;
char da_xiao(char a){
	if(a >= 'a' && a <= 'z') a -= 32;
	return a;
}
void shu_chu(string a){
	for(int i = 0; i < a.size(); i++){
		cout << a[i];
	}
	return ;
}
int main(){
	string wen;
	getline(cin, wen)
	for(int i = 0; i < wen.size(); i++){
		wen[i] = da_xiao(wen[i]);
	}
	shu_chu(wen);
	return 0;
}