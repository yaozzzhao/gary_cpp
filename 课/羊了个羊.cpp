#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin >> a;
	while (a.size() > 0){
		for (int i = 0; i < a.size() - 2; i ++)
			if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]){
				for (int j = 0; j < i; j ++) cout << " ";
				cout << a[i] << a[i + 1] << a[i + 2] << endl;
				if (a.size() == 3) return 0;
				a.replace(i, 3, "");
			}
		cout << a << endl;
	}	
	return 0;
}