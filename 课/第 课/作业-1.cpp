#include<iostream>
#include<string>
using namespace std;
string math;
long long a = 0, b = 0;
char fuhao;
void chu_shi_hua(){
	while(math.find(" ") != string::npos){
		math.replace(math.find(" "), 1, "");
	}
	int i = 0;
	while(math[i] >= '0' && math[i] <= '9'){
		a = a * 10 + (int)(math[i] - '0');
        i++;
	}
	fuhao = math[i];
	i++;
	while(i < math.size()){
		b = b * 10 + (int)(math[i] - '0');
        i++;
	}
}
long long ji_suan(){
	if(fuhao == '+') return a + b;
	else if(fuhao == '-') return a - b;
	else if(fuhao == '*') return a * b;
	else if(fuhao == '/') return a / b;
	else return a % b;
}
int main(){
	getline(cin ,math);
	chu_shi_hua();
	cout << ji_suan() << endl;
	return 0;
}