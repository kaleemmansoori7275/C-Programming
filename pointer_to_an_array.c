#include<stdio.h>
int main()
{
  int arr[5]={2,5,7,8,9};
  int *p; //can point to a integer
  int (*pa)[5]; // can point to the whole array[5],priority of [] is higher than * thats why *pa is kept inside od paranthesis.
  p=arr;
  pa=&arr;
  
   printf("p=%d,pa=%d\n",p,pa);
   p++;
   pa++;
    printf("p=%d,pa=%d\n",p,pa);
  
  return 0;
  }
