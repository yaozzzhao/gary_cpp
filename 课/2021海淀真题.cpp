/*
1. count
#include <iostream>
using namespace std;
int main(){
	int n, cnt = 0;
	cin >> n;
	while (n){
		if (n % 10 == 8) cnt ++;
		n /= 10;
	}
	cout << cnt << endl;
	return 0;
}

2. matrix
#include <iostream>
using namespace std;
int main(){
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	for (int i = a; i > 0; i --)
		for (int j = b; j > 0; j --)
			if (double(i) / x == double(j) / y){
				cout << i << " " << j << endl;
				return 0;
			}
	cout << "0 0\n";
	return 0;
}

3. game
#include <iostream>
using namespace std;
int n, a[20010], suma = 0, sumb = 0, maxai, maxbi;
void smab(){
	suma = 0, sumb = 0, maxai = 0, maxbi = 0;
	for (int i = 0; i < n; i ++){
		suma += (a[i] % 2 == 0) ? a[i] : 0;
		sumb += (a[i] % 2 == 1) ? a[i] : 0;
		maxai = (a[maxai] < a[i]) ? i : maxai;
		maxbi = (a[maxbi] < a[i]) ? i : maxbi;
	}
	return ;
}
char game(){
	int score_a = 0, score_b = 0;
	for (int i = 0; i < n; i += 2){
		smab();
		if (sumb > suma) a[maxbi] = 0;
		else score_a += a[maxai], a[maxai] = 0;
		smab();
		if (suma > sumb) a[maxai] = 0;
		else score_b += a[maxbi], a[maxbi] = 0;
	}
	if (score_a > score_b) return 'A';
	else if (score_b > score_a) return 'B';
	return 'C';
}
int main(){
	int t;
	cin >> t;
	while (t --){
		cin >> n;
		for (int i = 0; i < n; i ++)
			cin >> a[i];
		cout << game() << endl;
	}
	return 0;
}

4. candy
#include <iostream>
#include <cmath>
using namespace std;
long long n, k, m, d, maxn = 0;
long long candy(int i){
	int cnt = 0, tn = n, sum = 0;
	while (tn >= i){
		cnt ++;
		if (cnt > d) return 0;
		sum += i;
		tn -= k * i;
	}
	return sum;
}
int main(){
	cin >> n >> k >> m >> d;
	for (int i = 1; i <= m; i ++){
		maxn = max(candy(i), maxn);
	}
	cout << maxn << endl;
	return 0;
}

5. divide
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, a[100010], cnt = 0;
vector<int> b;
void check(int i){
	if (b.size() <= 1) return ;
	sort(b.begin(), b.end());
	int c = b[0] - b[1];
	for (int i = 1; i < b.size() - 1; i ++){
		if (b[i] - b[i + 1] != c){
			cnt ++;
			b.clear();
			b.push_back(a[i]);
			return ;
		}
	}
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i];
	for (int i = 0; i < n; i ++){
		b.push_back(a[i]);
		check(i);
	}
	cout << cnt << endl;
	return 0;
}
*/