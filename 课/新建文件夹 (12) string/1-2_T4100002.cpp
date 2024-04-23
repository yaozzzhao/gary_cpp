#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n, tot = -1;
string p[32];
struct ren{
	int m, d, n;
	string tmp, a[1005];	
} s[1005];
bool cmp(string a, string b){
	if (a.size() != b.size())
		return a.size() < b.size();
	return a < b; 
}
bool cmp2(ren a, ren b){
	if (a.m == b.m)
		return a.d < b.d;
	return a.m < b.m;
}
int main(){
	cin >> n;
	p[1] = "1", p[2] = "2", p[3] = "3", p[4] = "4", p[5] = "5", p[6] = "6";
	p[7] = "7", p[8] = "8", p[9] = "9", p[10] = "10", p[11] = "11", p[12] = "12";
	p[13] = "13", p[14] = "14", p[15] = "15", p[16] = "16", p[17] = "17", p[18] = "18";
	p[19] = "19", p[20] = "20", p[21] = "21", p[22] = "22", p[23] = "23", p[24] = "24";
	p[25] = "25", p[26] = "26", p[27] = "27", p[28] = "28", p[29] = "29", p[30] = "30";
	p[31] = "31";
	for (int i = 0; i < n; i ++){
		int m, d;
		string a;
		cin >> a >> m >> d;
		bool flag = 1;
		for (int i = 0; i <= tot; i ++)
			if (s[i].m == m && s[i].d == d){
				s[i].n ++;
				s[i].a[s[i].n - 1] = a;
				flag = 0;
				break;
			}
		if (flag) {
			tot ++;
			s[tot].tmp = p[m] + " " + p[d] + " ";
			s[tot].m = m, s[tot].d = d, s[tot].a[0] = a, s[tot].n = 1;
		}
	}
	sort(s, s + tot + 1, cmp2);
	for (int i = 0; i <= tot; i ++){
		if (s[i].n == 1) continue;
		cout << s[i].tmp;
		sort(s[i].a, s[i].a + s[i].n, cmp);
		for (int j = 0; j < s[i].n; j ++)
			cout << s[i].a[j] << " ";
		cout << endl;
	}
	return 0;
}
/*
6
Avril 3 2
Candy 4 5
Tim 3 9
Sufia 4 6
Bill 3 6
Lagrange 1 9
*/