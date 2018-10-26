#include<stdio.h>
int main()
{
  int arr[5]={2,5,7,8,9,6,4};
  int i,*p;
  p=arr;
  for(i=0;i<7;i++)
  {
    printf("value of arr[%d]=%d %d %d\n",i,*(arr+i),*(p+i),p[i]); // prints values
     printf("address of arr[%d]=%d\n",i,(arr+i),p+i,&p[i]);
  }
  return 0;
  }
