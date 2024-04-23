#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	FILE * fin, * fout;
//	fin = fopen("1-1-in.txt", "rb");
//	fout = fopen("1-1-out.txt", "wb");
	fin = stdin;
	fout = stdout;
	int temp, sum = 0;
	while(fscanf(fin, "%d", &temp) == 1){
		sum += temp;
	}
	fprintf(fout, "%d", sum);
	fclose(fin);
	fclose(fout);
	return 0;
}