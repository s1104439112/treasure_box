#include "stdio.h"
int ack(int m,int n)
{
	if(m==0)
		return n + 1;
	else if(n == 0)
		return ack(m-1,1);
	else
		return ack(m - 1, ack(m, n-1));
}

int main(){
	int i = 0;
	i = ack(4,1);
	printf("%d",i);
}
