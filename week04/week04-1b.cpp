//week04-1b.cpp SOIT108_Advance_008
//c++ version
#include <iostream>
#include <algorithm> //week04
#include <vector> //week03
using namespace std;
int main(){
	vector <int> a(10); //week04
	for (int i=0;i<10;i++){
		cin >>a[i];
	}
	sort(a.begin(), a.end());//week04
	for (int i=9;i>=0;i--){
		cout<< a[i]<< ' ';
	}
}
