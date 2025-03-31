#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=0;i++){
        int b =1;
        for (int j=1;j<=i;j++){
            int d = 64+b;
            char  cch = (char)d;
            printf ("%c",cch);
            b++;

        }
        printf("\n");

    }
    return 0;
}