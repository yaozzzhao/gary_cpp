#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
	int number,player_number;
	srand(time(0));
	number=rand()%101+0;
	while(true){
		cout<<"Please guess the number from 0 to 100:  ";
		cin>>player_number;
		if(player_number>number){
			cout<<"too big"<<endl;
		}
		else if(player_number<number){
			cout<<"too small"<<endl;
		}
		else{
			cout<<"congratulation"<<endl;
			break;
		}
	}
}