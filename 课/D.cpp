#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	cout << "D language" << endl;
	cout << "------------------------------------------------------------" << endl;
	int a = 1, a__;
	string c;
	bool dio = false, a_ = false;
	
	while (a <= 999){
		cout << setw(3) << a << " ";
		cin >> c;
		if (c.compare("over") == 0){
			return 0;
		}
		if (c.compare("in") == 0){
			cin >> c;
			if (c.compare("<dio>") == 0){
				dio = true;
			}
		}
		if (c.compare("dout") == 0){
			if (!dio){
				cout << " no ~in <dio>~" << endl;
				cin >> c >> c >> c;
				a ++;
				continue;
			}
			cin >> c;
			if (!c.compare(":") == 0){
				cout << " no ~:~" << endl;
				cin >> c >> c;
				a ++;
				continue;
			}
			cin >> c;
			if (c.compare("d") == 0){
				cin >> c;
				if (c.compare("_a") == 0){
					if (!a_){
						cout << " no ~int : _a~" << endl;
						a ++;
						continue;
					}
					cout << "out " << a__ << endl;
				} else {
					cout << "out " << c << endl;
				}
			}
		}
		if (c.compare("int") == 0){
			cin >> c;
			if (!c.compare(":") == 0){
				cout << " no ~:~" << endl;
				cin >> c;
				a ++;
				continue;
			}
			cin >> c;
			a_ = true;
		}
		if (c.compare("din") == 0){
			cin >> c;
			if (!c.compare(":") == 0){
				cout << " no ~:~" << endl;
				cin >> c;
				a ++;
				continue;
			}
			cin >> c;
			cout << " in ";
			cin >> a__;
		}
		a ++;
	}
	return 0;
}

/*
D language
------------------------------------------------------------
  1 in <dio>
  2 dout : d 1023
out 1023
  3 int : _a
  4 din : _a
 in 1023
  5 dout : d _a
out 1023
  6 over
*/