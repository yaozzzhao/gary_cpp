#include <iostream>
#include <string>
using namespace std;

struct Level{
	int level, n, m;
	bool chuan;
	string a, b;
};
Level Level1 = {1, 3, 0, 0, "AAB", ""};
Level Level2 = {2, 5, 0, 0, "AAABB", ""};
Level Level3 = {3, 7, 0, 0, "AAABBBB", ""};

void print(Level Level0, int n_){
	cout << "  ";
	for(int i = 0; i < Level0.n; i ++){
		cout << Level0.a[i] << " ";
	}
	cout << endl << "  ";
	if(Level0.chuan == 0){
		cout << "--" << endl << endl;
	} else {
		cout << endl;
		for(int i = 0; i < n_ - 1; i ++){
			cout << "  ";
		}
		cout << " --" << endl;
	}
	cout << "  ";
	for(int i = 0; i < Level0.m; i ++){
		cout << Level0.b[i] << " ";
	}
	cout << endl;
	return ;
}

void level(Level Level0){
	int n_ = Level0.n, k;
	string c = "";
	cout << "level" << Level0.level << " :" << endl;
	while(Level0.m < n_){
		print(Level0, n_);
		cout << "number : ";
		cin >> k;
		while(k < 1 || k > 2){
			cout << "number : ";
			cin >> k;
		}
		if(!Level0.chuan){
			do {
				char d = '\0';
				c = "";
				cout << "persons : ";
				for(int i = 0; i < k; i ++){
					cin >> d;
					c = c + d;
					d = '\0';
				}
			} while(Level0.a.find(c) == string::npos);
			Level0.b = Level0.b + c;
			Level0.a.replace(Level0.a.find(c), c.size(), "");
			Level0.n -= c.size();
			Level0.m += c.size();
		} else {
			do {
				char d = '\0';
				c = "";
				cout << "persons : ";
				for(int i = 0; i < k; i ++){
					cin >> d;
					c = c + d;
					d = '\0';
				}
			} while(Level0.b.find(c) == string::npos);
			Level0.a = Level0.a + c;
			Level0.b.replace(Level0.b.find(c), c.size(), "");
			Level0.n += c.size();
			Level0.m -= c.size();
		}
		Level0.chuan = 1 - Level0.chuan;
	}
	print(Level0, n_);
	cout << "good job" << endl << endl << endl;
	return ;
}

int main(){
	cout << "Welcome to guo'he game!" << endl;
	cout << endl;
	level(Level1);
	level(Level3);
	return 0;
}