//week01-1.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main(){
	int n;///整數n
	scanf("%d",&n);///c語言 讀入整數n
	int b =n ,ans=0;///將n的值備份b,答案0開始湊
	while (n>0){///只要n還在,就繼續剝皮
		ans =ans*10+n%10;
		n=n/10;
	}
	printf("%d+%d=%d\n",b,ans,b+ans);

}
