#include<stdio.h>
int main()
{
  int a=5;
  int *pa;
  pa=&a;
  int **ppa;
  ppa=&pa;
//pa is a pointer pointing to a,where ppa is a pointer pointing to the address of pa.
   printf("address of a=%d\n",&a);
   printf("address of a=value of pa=%d\n",pa);
   printf("value of *pa=value of a=%d\n",*pa);
   printf("address of pa=value of ppa=%d\n",ppa);
   printf("value of *ppa=value of pa=%d\n",*ppa);
   printf("value of a=value of **ppa=%d\n",**ppa);
   printf("address of ppa=%d\n",ppa);
 

    return 0;
    }
