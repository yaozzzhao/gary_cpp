#include<iostream>
using namespace std;
struct student {
	char name[100];
	double chinese, math, total;
	int xue_hao;
	bool xing_bie;
};
student x[5] = 
{{"xiao_ming", 90, 90, 0, 1, 0},
{"xiao_shuai", 0, 100, 0, 2, 0},
{"xiao_mei", 100, 50, 0, 3, 1}};
void out(int n){
	x[n].total = x[n].chinese + x[n].math;
	cout << x[n].name << " :" << endl;
	cout << "  score :" << endl;
	cout << "    chinese : " << x[n].chinese << endl;
	cout << "    math : " << x[n].math << endl;
	cout << "    total : " << x[n].total << endl;
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