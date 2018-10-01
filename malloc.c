#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int)); /*Dynamic memory Allocation*/
	if(p==NULL)
	{
		printf("not enough space");
		exit(1);
	}
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	
		for(i=0;i<n;i++)
		printf("%d",*(p+i));
		
		return 0;
}
