#include <stdio.h>
#include <conio.h>
#include<string.h>

void main()
{
char str1[80],str2[80];
int i,j,t;

printf("Enter 1st string\n");
gets(str1);
fflush(stdin);
printf("Enter 2nd string\n");
gets(str2);
printf("Common Vowel :\n");
 for(i=0;str1[i]!='\0';i++)
 {
  for(j=i-1;j>=0;j--)

   if(str1[i]==str1[j])
   break;
   if(j==-1)
   for(t=0;str2[t]!='\0';t++)

     if(str1[i]==str2[t] && (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U'))
    {
     printf("%c",str1[i]);
     break;
    }
  }

 getch();
}
