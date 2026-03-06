#include <stdio.h>
#include <string.h>

int main()
{
 char str[100],rev[100];
 printf("Enter the string: ");
 fgets(str,100,stdin);
 int len=strlen(str);
 for(int i=0;str[i]!='\0';i++)
 {
     rev[i]=str[len-1-i];
 }
 rev[len] = '\0';
 printf("The reverse string is: %s",rev);
}
