//week05-1.cpp UVA10252
//only uso easy input ,not  submit it
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
	string s1,s2;
	while (cin >>s1>>s2){
		vector <char> a1(s1.begin(),s1.end());
		vector <char> a2(s2.begin(),s2.end());
		sort (a1.begin(),a1.end());
		sort (a2.begin(),a2.end());
		int n1=a1.size(),n2=a2.size(),i=0,j=0;
		while (i<n1 &&j<n2){
			if (a1[i]==a2[j]){
				cout <<a1[i];
				i++;j++;
			}else if( a1[i] <a2[j]){
				i++;
			}else if( a1[i] >a2[j]){
				j++;
			}
		}
		cout<<"\n";
	}
}
