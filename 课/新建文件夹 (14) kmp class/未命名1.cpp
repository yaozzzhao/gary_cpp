#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
class User{
	int coin, level;
	protected :
		string r_name, password;
	public :
		static int cnt;
		string f_name;
		User(string r, string f, string pass){
			cnt ++;
			r_name = r, f_name = f, password = pass;
			coin = 100, level = 1;
		}
};
int User::cnt = 0;
int main(){
	class User a("zhaomaguo", "zhaoguo", "zhenshuai");
	return 0;
}
