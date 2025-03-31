#include <stdio.h>
int main ()
{
    int a;
    int b =1;
    scanf("%d",&a);
    for (int i=1;i<=0;i++){
        
        for (int j=1;j<=i;j++){
            int d = 64+j;
            char  cch = (char)d;
            printf ("%c",cch);
            // b++;

        }
        printf("\n");

    }
    return 0;
}