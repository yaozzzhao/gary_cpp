#include<iostream>
#include<cstdio>
using namespace std;
struct student {
	char name[20];
	bool gender;
	double score;
}a = {"xiaoming", 0, 100}, *p = &a;
int main(){
	printf("%s %d %.1lf\n", a.name, a.gender, a.score);
	printf("%s %d %.1lf\n", (*p).name, (*p).gender, (*p).score);
	return 0;
}