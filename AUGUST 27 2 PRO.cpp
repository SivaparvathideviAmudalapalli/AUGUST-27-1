#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="abcd";
	substring(s,strlen(s));
	return 0;
}
void substring(char,s[],int n)
{
	int x,i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			int x=j+i;
			for(k=j;k<x;k++)
			printf("%3c",s[k]);
			printf("\n");
		}
	}
}
