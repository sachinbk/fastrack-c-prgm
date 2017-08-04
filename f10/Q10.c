#include<stdio.h>

int main()
{
 char ch;
 printf("Enter any character : ");
 scanf("%ch", &ch);
 if(ch>='A' && ch<='Z')
     ch=ch+32;
 else if(ch>'a' && ch<='z')
     ch=ch-32;
 printf("Convert case of character : %c",ch);

 return 0;
}