//week10-1.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int n){
	for (int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	int ans=0;
	//把a...b的每個數字都試一次
	for (int i=a;i<=b;i++){
		//判斷質數
		if (isPrime(i))ans++;
	}
	cout<<ans<<"\n";
}
