#include<iostream>
#include<cstring>

using namespace std;
char yuan_mi[3][27];
char temp2[100], temp[100];
bool check(char letter, int biao){
	for(int i = 0; i < strlen(yuan_mi[1]); i++){
		if(yuan_mi[1][i] == letter){
			temp[biao] = '0';
			return 0;
		}
	}
	return 1;
}
bool check2(char letter){
	for(int i = 0; i < strlen(yuan_mi[0]); i++){
		if(yuan_mi[0][i] == letter){
			return 1;
		}
	}
	return 0;
}
bool shu_ru(){
	int n = 0;
	cin >> temp;
	cin >> temp2;
	for(int i = 0; i < strlen(temp2); i++){
		if(check(temp2[i], i)){
			yuan_mi[1][n] = temp2[i];
			n++;
		}
	}
	if(strlen(yuan_mi[1]) < 26){
		cout << "Failed" << endl;
		return 1;
	}
	for(int i = 0; i < strlen(temp); i++){
		if(check2(temp[i])){
			cout << "Failed" << endl;
			return 1;
		}
	}
	return 0;
}
char find_mi(char mi){
	for(int i = 0; i < 26; i++){
		if(yuan_mi[0][i] == mi){
			return yuan_mi[1][i];
		}
	}
	return ' ';
}
int main(){
	char mi[100], yuan[100];
	bool flag = shu_ru();
	int n = 0;
	cin >> mi;
	if(flag) return 0;
	for(int i = 0; i < strlen(mi); i++){
		yuan[n] = find_mi(mi[i]);
		n++;
	}
	cout << yuan << endl;
	return 0;
}

//MSRTZCJKPFLQYVAWBINXUEDGHOOILSMIJFRCOPPQCEUNYDUMPP
//YIZSDWAHLNOVFUCERKJXQMGTBPPKOIYKANZWPLLVWMQJFGQYLL
//FLSO