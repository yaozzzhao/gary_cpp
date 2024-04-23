#include<iostream>
using namespace std;
int main(){
	bool a[105] = {0};
	for(int i = 1; i <= 100; i++){
		for(int j = 1; j <= 100; j++){
			if(j % i == 0) a[j] = 1 - a[j];
		}
	}
	for(int i = 1; i <= 100; i++){
		if(a[i]) cout << i << " ";
	}
	return 0;
}
