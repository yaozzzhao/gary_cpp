#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <iomanip>
using namespace std;
const int N = 8, M = 2, O = 10;
int a[10][10] = {{0}}, maxn = 0;
void left(int i, int j){
	if (a[i][j - 1] == 0 && j != 1){
		swap(a[i][j - 1], a[i][j]);
		left(i, j - 1);
	} else if (a[i][j - 1] == a[i][j]){
		a[i][j - 1] *= 2, a[i][j] = 0;
		maxn = max(maxn, a[i][j - 1]);
		left(i, j - 1);
	}
	return ;
}
void right(int i, int j){
	if (a[i][j + 1] == 0 && j != N){
		swap(a[i][j + 1], a[i][j]);
		right(i, j + 1);
	} else if (a[i][j + 1] == a[i][j]){
		a[i][j + 1] *= 2, a[i][j] = 0;
		maxn = max(maxn, a[i][j + 1]);
		right(i, j + 1);
	}
	return ;
}
void up(int i, int j){
	if (a[i - 1][j] == 0 && i != 1){
		swap(a[i - 1][j], a[i][j]);
		up(i - 1, j);
	} else if (a[i - 1][j] == a[i][j]){
		a[i - 1][j] *= 2, a[i][j] = 0;
		maxn = max(maxn, a[i - 1][j]);
		up(i - 1, j);
	}
	return ;
}
void down(int i, int j){
	if (a[i + 1][j] == 0 && i != N){
		swap(a[i + 1][j], a[i][j]);
		down(i + 1, j);
	} else if (a[i + 1][j] == a[i][j]){
		a[i + 1][j] *= 2, a[i][j] = 0;
		maxn = max(maxn, a[i + 1][j]);
		down(i + 1, j);
	}
	return ;
}
void wow(){
	for (int i = 1; i <= N * (O + 1) + 1; i ++)
		cout << "-";
	cout << endl;
	return ;
}
// mozu1    suoha
void sheng(){
	srand(time(0));
	int ni, nj, ncnt = 0;
	do {
		ni = rand() % N + 1;
		nj = rand() % N + 1;
		ncnt ++; 
	} while (a[ni][nj] != 0 && ncnt < 512);
	if (ncnt >= 512) return ;
	a[ni][nj] = M;
}
void suoha1(){
	srand(time(0));
	int ni, nj, ncnt = 0;
	do {
		ni = rand() % N + 1;
		nj = rand() % N + 1;
		ncnt ++; 
	} while (a[ni][nj] != 0 && ncnt < 512);
	if (ncnt >= 512) return ;
	a[ni][nj] = M;
	suoha1();
}
int sh1 = 0;
void suoha2(){
	for (int i = 2; i <= N; i ++)
		for (int j = 1; j <= N; j ++)
			if (a[i][j] != 0) up(i, j);
	sheng();
	for (int i = 1; i <= N; i ++)
		for (int j = 2; j <= N; j ++)
			if (a[i][j] != 0) left(i, j);
	sheng();
	for (int i = N - 1; i >= 1; i --)
		for (int j = 1; j <= N; j ++)
			if (a[i][j] != 0) down(i, j);
	sheng();
	for (int i = 1; i <= N; i ++)
		for (int j = N - 1; j >= 1; j --)
			if (a[i][j] != 0) right(i, j);
	return ;
	
}
// mozu1    suoha
int main(){
	while (true){
		srand(time(0));
		if (sh1 == 0){
			int ni, nj, ncnt = 0;
			do {
				ni = rand() % N + 1;
				nj = rand() % N + 1;
				ncnt ++; 
			} while (a[ni][nj] != 0 && ncnt < 188);
			if (ncnt >= 188) {
				system("cls");
				cout << "you lost!\nScore: " << maxn << endl;
				return 0;
			} 
			a[ni][nj] = M;
		}
		sh1 = 0;
		wow();
		for (int i = 1; i <= N; i ++){
			cout << "|";
			for (int j = 1; j <= N; j ++){
				if (a[i][j] == 0) {
					for (int i = 0; i < O; i ++) cout << " ";
					cout << "|";
				}
				else cout << setw(O) << a[i][j] << "|";
			}	
			cout << endl;
			wow();
		}
		char jian;
		cin >> jian;
		if (jian == 'a'){
			for (int i = 1; i <= N; i ++)
				for (int j = 2; j <= N; j ++)
					if (a[i][j] != 0) left(i, j);
		}
		if (jian == 'd'){
			for (int i = 1; i <= N; i ++)
				for (int j = N - 1; j >= 1; j --)
					if (a[i][j] != 0) right(i, j);
		}
		if (jian == 'w'){
			for (int i = 2; i <= N; i ++)
				for (int j = 1; j <= N; j ++)
					if (a[i][j] != 0) up(i, j);
		}
		if (jian == 's'){
			for (int i = N - 1; i >= 1; i --)
				for (int j = 1; j <= N; j ++)
					if (a[i][j] != 0) down(i, j);
		}
		// mozu1    suoha
		if (jian == 'q'){
			suoha1();
			sh1 = 1;
		}
		if (jian == 'e'){
			suoha2();
		}
		// mozu1    suoha
		system("cls");
	}
	
	return 0;
} 
