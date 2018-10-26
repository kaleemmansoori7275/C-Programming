#include<stdio.h>
int ref(int a,int b,int *s,int *p,int *d);
int main()

{
	int x=9,y=3,sum,prod,div;

	ref(x,y,&sum,&prod,&div); //sending addresses to function
	printf("%d %d %d\n",sum,prod,div); //returning values to the main fn
	return 0;
}
int ref(int a,int b,int *s,int *p,int *d)
{
	*s=a+b; 
	*p=a*b; //pointer var(S) @
	*d=a/b;
	
}
