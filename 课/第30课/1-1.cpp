#include<iostream>
using namespace std;
struct Score {
	double chinese, math;
	double total; 
};
struct Student {
	char name[100];
	Score score;
	int xue_hao;
	bool xing_bie;
};
Student x[5] = 
{{"xiao_ming", {90, 90, 0}, 1, 0},
{"xiao_shuai", {0, 100, 0}, 2, 0},
{"xiao_mei", {100, 50, 0}, 3, 1}};
void out(int n){
	x[n].score.total = x[n].score.chinese + x[n].score.math;
	cout << x[n].name << " :" << endl;
	cout << "  score :" << endl;
	cout << "    chinese : " << x[n].score.chinese << endl;
	cout << "    math : " << x[n].score.math << endl;
	cout << "    total : " << x[n].score.total << endl;
	cout << "  xue_hao : " << x[n].xue_hao << endl;
	if(x[n].xing_bie) cout << "  xing_bie : nv" << endl;
	else cout << "  xing_bie : nan" << endl;
}
int main(){
	int n;
	cin >> n;
	out(n - 1);
	return 0;
}