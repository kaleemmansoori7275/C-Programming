#include<stdio.h>
int main()
{
  int a=7,*p; //where *p is a pointer variable of int type.
  float b=6.5,*q; //where *q is a pointer variable of float type.
  p=&a; //storing address of a in pointer variable p.
  q=&b;
  printf("address of a=value of p=%d\n",p);
  printf("address of b=value of q=%d\n",q);
  printf("value of a=%d %d %d\n",*(&a),*p,a);
  printf("value of b=%d %d %d \n",*(&b),*q,b);
  return 0;
  }
  
  
