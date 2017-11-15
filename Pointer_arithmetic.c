#include<stdio.h>
int main()
{
  int a=5,*p=&a;
  float b=7.8,*q=&b;
  char c=9,*r=&c;
   printf("address of a=value of p=%d\n",p);
   printf("address of b=value of q=%d\n",q);
   printf("address of c=value of r=%d\n",r);
     p++;//makes pointer to point to the next address according to its datatype
     q++;
     r++;
    printf("now value of p=%d\n",p);
    printf("now value of q=%d\n",q);
    printf("now value of r=%d\n",r);
    return 0;
    }
