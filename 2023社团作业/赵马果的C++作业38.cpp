#include<iostream>
using namespace std;
int main(){
	char a[256], b[256];
	cin >> a >> b;
	for(int i = 0; i < strlen(a); i++){
		char temp = a[0];
		for(int j = 1; j < strlen(a); j++){
			a[j - 1] = a[j];
		}
		a[strlen(a) - 1] = temp;
		bool temp_b = 1;
		for(int j = 0; j <= strlen(a) - strlen(b); j++){
			for(int k = 0; k < strlen(b); k++){
				if(a[j + k] != b[k]) temp_b = 0;
			}
			if(temp_b) break;
		}
		if(temp_b){
			cout << "true" << endl;
			return 0;
		}
	}
	cout << "false" << endl;
	return 0;
}
