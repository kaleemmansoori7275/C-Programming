#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 gets(a);
 int b[26],c[26],i,j;
 for(i=0;i<26;i++)
 {
 b[i]=0;// placing 0 at each block of array b&c to avoid garbage values.
 c[i]=0;
}
 for(i=97;i<123;i++)
 for(j=0;j<strlen(a);j++)
 {
 	if(a[j]==i)
 	b[i-97]++; //used for ASCII VALUES
 }
  for(i=65;i<91;i++)
 for(j=0;j<strlen(a);j++) //strlen gives length of a string
 {
 	if(a[j]==i)
 	c[i-65]++;
 }
 for(i=0;i<26;i++)
 {
 if(b[i]==0)
 continue;
 printf("%c = %d\n",i+97,b[i]);
}
 for(i=0;i<26;i++)
 {
 if(c[i]==0)
 continue;
 printf("%c = %d\n",i+65,c[i]);
}
 return 0;
}
