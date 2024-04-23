#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		int no, ban;
		string name;
		char sex;
		int cn, ma, en;
	public:
		void input(){
			cin >> this -> name;
		}
		void print(){
			cout << this -> name << endl;
		}
};
class Mystr{
	string data;
	public:
		static int cnt;
		Mystr(string _data): data(_data) {}
		void out(){
			cout << this -> data << endl;
		}
};
class Myfriend{
	string hi;
	int sum, a[10];
	public:
		friend ostream &operator << (ostream &output, const Myfriend &D){
			output << "hi : " << D.hi << endl;
			for (int i = 0; i < 10; i ++)
				output << "a[" << i << "] : " << D.a[i] << endl;
			cout << "sum : " << D.sum << endl;
		}
		friend istream &operator >> (istream &input, Myfriend &D){
			input >> D.hi;
			for (int i = 0; i < 10; i ++){
				input >> D.a[i];
				D.sum += D.a[i];
			}
		}
};
int main(){
//	class student a;
//	a.input();
//	a.print();
	
//	string c;
//	cin >> c;
//	Mystr a(c);
//	a.out();
	
	class Myfriend a;
	cin >> a;
	cout << a;
	return 0;
}
