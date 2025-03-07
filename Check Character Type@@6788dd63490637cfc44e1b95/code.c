#include <stdio.h>
#include <ctype.h>
int main ()
{
    char ch ;
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') printf("Vowel");
    else if ('a'<=ch || ch<='z'||'A'<=ch || ch<='Z') printf("Consonant");
    // else if (int(ch))
    else printf("Special Character");
    return 0;
}