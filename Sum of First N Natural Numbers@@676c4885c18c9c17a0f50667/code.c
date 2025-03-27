#include <stdio.h>
int main ()
{
    int a,b=0;
    scanf("%d",&a);
    if (a>=1) {
        for (int i=1;i<=a;i++) {
            b = b+i;
        }
        printf("%d",b);

    }
    else printf("0");
    return 0;
}