#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	const int N = 100;
	long long number, p_num, a = 0, b = N, live = 9;
	srand(time(0));
	number = rand() % (N + 1) + 0;
	cout << "number bomb!" << endl;
	while(live){
		cout << endl;
		cout << a << " ~ " << b << endl << "live: ";
		for (int i = 0; i < live; i ++)
			cout << "@";
		cout << endl;
		cin >> p_num;
		live --;
		if (p_num < a || p_num > b){
			cout << "no no no!" << endl;
			continue;
		}
		if (p_num == number){
			cout << "congratulate!" << endl;
			return 0;
		} else if(p_num < number){
			a = p_num;
		} else if(p_num > number){
			b = p_num;
		}
	}
	cout << "You lost" << endl;
	return 0;
}