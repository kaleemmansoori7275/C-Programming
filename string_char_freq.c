#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 gets(a);
 int b[26],i,j,l=97;
 for(i=0;i<26;i++)
 b[i]=0; // placing 0 at each block of array b to avoid garbage values.
 for(i=97;i<121;i++)
 for(j=0;j<strlen(a);j++)
 {
 	if(a[j]==i)
 	b[i-97]++;
 }
 for(i=0;i<26;i++)
 printf("%c = %d\n",l++,b[i]);
 return 0;
}
