#include <iostream>
using namespace std;
int main(){
	int a[5] = {12, 43, 3210, 173, 12};
	cout << a << endl;
	for(int i = 0; i < 5; i++){
		cout << &a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << (a + i) << " ";
	}
	return 0;
}