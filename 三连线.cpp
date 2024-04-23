#include<iostream>
using namespace std;
int main()
{
	char a[3][3] = {'1','2','3','4','5','6','7','8','9'};
	int x, y, no_space = 9, player = 0;
	bool win = 0;
	while(not(win) && no_space != 0){
		player++;
		if(player > 2){
			player = 1;
		}
		cout << "Please input 0~2 for x and y " << endl;
		cout << "Player "<< player <<" : ";
		cin >> x >> y;
		while(x > 2 || x < 0 || y > 2 || y < 0){
			cout << "Please input 0~2 for x and y " << endl;
			cout << "Player "<< player <<" : ";
			cin >> x >> y;
		}
		while(a[x][y] == 'O' || a[x][y] == 'X'){
			cout << "There are O/X" << endl;
			cout << "Player "<< player <<" : ";
			cin >> x >> y;
		}
		no_space--;
		if(player == 1){
			a[x][y] = 'O';
		}else{
			a[x][y] = 'X';
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(a[i][j] != 'O' && a[i][j] != 'X'){
					cout << "  ";
				}else{
					cout << a[i][j] << " ";
				}
			}
			cout << endl;
		}
		for(int i = 0; i < 3; i++){
			if(a[i][0] == a[i][1] && a[i][1] == a[i][2] || a[0][i] == a[1][i] && a[1][i] == a[2][i]){
				win = 1;
				break;
			}
		}
		if(a[0][0] == a[1][1] && a[1][1] == a[2][2] || a[0][2] == a[1][1] && a[1][1] == a[2][0] || win){
			win = 1;
			break;
		}
	}
	if(win){
		cout << "Player " << player << " win!"<<endl;
	}else{
		cout << "It's a tie" << endl;
	}
}
