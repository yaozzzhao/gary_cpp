#include <iostream>
using namespace std;
void Swap(int *pa, int *pb){
	int c = *pa; *pa = *pb; *pb = c;
}
int main(){
	int a = 10, b = 20;
	Swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}