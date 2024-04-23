#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
const int N = 1e5;
string a, b[N];
long long findd, n;
long long c[N];
void chu_shi_hua(){
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	for(long long i = 0; i < n; i++){
		for(int j = 0 ; j < b[i].size(); j++){
			if(b[i][j] >= 'A' && b[i][j] <= 'Z') b[i][j]+=32;
		}
	}
	return ;
}
int find_b(){
	int cnt = 0;
	for(long long i = 0; i < n; i++){
		if(b[i] == a){
			cnt++;
			if(cnt == 1) findd = c[i];
		}
	}
	if(cnt == 0)return -1;
	return cnt;
}
int main(){
	long long temp_i = 0;
	cin >> a;
	cin.ignore();
	char temp_c = getchar();
	while(temp_c != '\n'){
		if(temp_c == ' '){
			c[n] = temp_i;
			n++;
			temp_c = getchar();
			temp_i += b[n - 1].size() + 1;
			continue;
		}
		b[n] = b[n] + temp_c;
		temp_c = getchar();
	}
	c[n] = temp_i;
	n++;
	chu_shi_hua();
	int temp = find_b();
	cout << temp;
	if(temp != -1) cout << " " << findd;
	return 0;
}

//to be or not to be is a question
//Did the Ottoman Empire lose its power at that time