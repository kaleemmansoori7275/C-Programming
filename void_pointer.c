#include<stdio.h>
int main()
{
void *in,*flo,*cha;
int i=9;
char j='A',*c;
float k=2.5;

in=&i; //method 1 to assign 

c=&j;  //method 2 to assign
cha=c;

flo=&k;


printf("%d\n",*(int *)in); //syntax to use(print/operations) a void pointer- *(data_type *)void_pointer_name  
printf("%f\n",*(float *)flo);
printf("%c\n",*(char *)cha);

return 0;
	
}
