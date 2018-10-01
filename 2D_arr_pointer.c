#include<stdio.h>
int main()
{
  int arr[3][4]={{2,3,5,6},{3,6,0,7},{3,1,6,7}};
  int (*p)[4];      //to point a 2D array[i][j] syntax of declaring a pointer p =(*p)[j]  
  p=arr;
  int i,j;
  for(i=0;i<3;i++) //for rows
  {
    for(j=0;j<4;j++) //for columns
   {
	printf("address of arr[%d][%d]=%d\n",i,j,*(p+i)+j);
    printf("value of arr[%d][%d]=%d\n\n",i,j,*(*(p+i)+j));
    }
	}
    return 0;
    }
