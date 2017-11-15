#include<stdio.h>
int main()
{
  int arr[5]={2,5,7,8,9};
  int i;
  for(i=0;i<5;i++)
  {
    printf("value of arr[%d]=%d\n",i,*(arr+i));
     printf("address of arr[%d]=%d\n",i,(arr+i));
  }
  return ;
  }
