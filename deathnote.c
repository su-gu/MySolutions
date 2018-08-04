/*
https://codeforces.com/contest/1016/problem/A
*/
#include<stdio.h>
int main()
{
	int m,n;
	int temp=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	for (int i = 0; i < n; i++)
	{	
	temp=temp+a[i];
	printf("%d ",(temp/m));
	temp=temp%m;	
	}		

	
	return 0;
}