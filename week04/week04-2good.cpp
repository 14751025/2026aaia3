///week04-2good.cpp 這程式是對的 用c++進階迴圈
///但是在codeblocks出錯 warning range-based for
///2011年之後 只有在-std =c++11 or -std =gnu++11 才能用
///所以需要改設定 setting compiler
///選第2個
///下面是week04小考 SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int now;
	for (int i=0;i<20;i++){
		cin>>now;
		if (now==0) break;
		a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for (int k:a){ ///在codeblocks 設定出錯時，永遠跑不出答案
		if (k==now){
			ans++;
		}
	}
	cout << ans << "\n";
}///截圖時 請把build messages 裡面的藍色warning也截圖出來
