#include<iostream>
using namespace std;
int main() 
{
	int score;
	char grade;
	cin>>score;
	if(score>90){
		grade='A';
	}
	else if(score<=90 && score>=60){
		grade='B';
	}
	else{
		grade='C';
	}
	cout<<grade<<endl;
	return 0;
}