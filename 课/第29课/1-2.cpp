#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin("1-2-in.txt");
	ofstream fout("1-2-out.txt");
	int temp, sum = 0;
	while(fin >> temp){
		sum += temp;
	}
	fout << sum;
	fin.close();
	fout.close();
	return 0;
}