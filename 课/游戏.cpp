#include <iostream>
#include <string>
using namespace std;
struct Door{
	int jibei = 1;
	int ji[10] = {0, 5, 5, 10, 10, 15, 20, 25, 30, 40};
	int xueliang = 10 + (jibei - 1) * 5;
};
int main(){
	int mima;
	bool mouse, tuichu = 1;
	cout << "password: ";
	cin >> mima;
	switch(mima){
		case 1234:{
			cout << "yes!!!" << endl;
			break;
		}
		default:{
			cout << "no! ";
			return 0;
		}
	}
	cout << "be a mouse?: ";
	cin >> mouse;
	if(!mouse){
		cout << "be a cat!" << endl << "you are a cat." << endl << endl << "1------------------1" << endl << endl;
	} else {
		cout << "you are a mouse." << endl << endl << "1------------------1" << endl << endl;
	}
	if(mouse){
		Door door;
		while(tuichu){
			cout << "-----house-----" << endl;
		
		}
	}
	return 0;
}