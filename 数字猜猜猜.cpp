#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,life=5,huda;
	srand(time(0));
	n=rand()%90000+10000;
	bool see[5]={0,0,0,0,0};
	int n_[5]={n/10000,n/1000%10,n/100%10,n/10%10,n%10};
	cout<<"Welcome to number guess guess guess!"<<endl<<endl;
	while(not(see[0] && see[1] && see[2] && see[3] && see[4]) && life>0){
		cout<<"life:";
		for(int i=1;i<=life;i++){
			cout<<"@";
		}
		cout<<endl;
		for(int i=0;i<5;i++){
			if(see[i]){
				cout<<n_[i];
			}
			else{
				cout<<"X";
			}
		}
		cout<<endl<<"Please input a number or the whole number:";
		cin>>huda;
		if(huda==n){
			break;
		}
		else{
			for(int i=0;i<5;i++){
				if(n_[i]==huda){
					see[i]=1;
					life++;
				}
			}
			life--;
		}
	}
	cout<<endl<<n<<endl;
	if(life>0){
		cout<<"You win the game!"<<endl;
	}
	else{
		cout<<"You lose"<<endl;
	}
	cout<<"Thanks for playing!"<<endl;
	return 0;
}