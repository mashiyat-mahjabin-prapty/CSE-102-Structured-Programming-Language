#include<stdio.h>

int fibn(int n)
{
	if(n == 0 || n == 1)
	return 1;
	return fibn(n-1)+fibn(n-2);
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d", fibn(n));
	
	return 0;
}
