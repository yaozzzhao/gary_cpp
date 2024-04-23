#include<cstdio>
#include<string>
using namespace std;
int main(){
	
	string math, s1, s2;
	double sum = 0;
	char yun_suan_fu[10] = {'+','-','*','/','^'};
	bool flag = 1;
	while(flag){
		printf("Please input a suan'shi: \n");
		scanf("%s", math);
		for(int i = 0; i < 5; i++){
			if(math.find(yun_suan_fu[i]) != string::npos){
				char temp = math[math.find(yun_suan_fu[i]) + 1]; 
				for(int j = 1; j <= 9; j++){
					if(temp == j){
						flag = 0;
						break;
					}
				}
				if(not(flag)){
					break;
				}
			}
		}
	}
	/*while(math.size() > 0){
		
	}*/
	return 0;
}