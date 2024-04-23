//n! mo'wei'you k ge'lian'xu'de 0, 1~2019 na'xie'shu k qu'bu'dao//
#include <iostream>
using namespace std;
int main()
{
	int number[2020];
	int n = 5, k = 0, a, sum = 0 ;
	cout << "go!\n";
	for (int i = 1; i <= 2019; i++){
		number[i] = i;
	}
	while (k <= 2019){
		k = 0;
		a = n / 5;
		while (a >= 5){
			k += a;
			a /= 5;
		}
		k += a;
		number[k] = 0;
		n += 5;
	}
	for (int i = 1; i <= 2019; i++){
		if (number[i] != 0){
			cout << number[i] << " ";
			sum ++;
		}
	}
	cout << '\n' << sum;
}