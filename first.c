
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int l,s;
    int i=0;
    char str[100];
    char revstr[100];
    //Take input string
    printf("Enter The String\n");
    gets(str);
    //Code for Reverse String
    l=strlen(str);
    s=l;

    for(i=0;i<=s;i++)
    {

        revstr[i]=str[l-1];
        l--;
    }
   printf(" Reverse String Is  \n%s",revstr);
}
