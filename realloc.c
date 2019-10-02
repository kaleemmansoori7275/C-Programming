#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p,i;
	
	p=(int *)calloc(4,sizeof(int));
	if(p==NULL)
	{
		printf("not enough space");
		exit(1);
	}
	for(i=0;i<4;i++)
	*(p+i)=i*2;
	
		p=(int *)realloc(p,8*sizeof(int)); //syntax of realloc() = (datatype *)realloc(pointer_name,new_size*sizeof(datatype))
	if(p==NULL)
	{
		printf("not enough space");
		exit(1);
	}
	for(i=4;i<8;i++)
	*(p+i)=i*100;
	
		for(i=0;i<8;i++)
		printf("%d\t",*(p+i));
		
		return 0;
}
