#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j=0,k=97,l,b[27],m;
	for(i=0;i<26;i++)
	b[i]=0;
	gets(a);
	m=strlen(a);
	for(i=97;i<121;i++)
{
		for(l=0;l<m;l++)
	{
		if(a[l]==i)
		b[i-97]++;
	}
	}	for(i=0;i<26;i++)
	printf("%c = %d\n",k++,b[i]);
	return 0;
	}
