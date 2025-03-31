#include <stdio.h>
int main (){
    int a,i,j,k,sp;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++) printf("_");
        k=2*i-1;
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
      
     
        printf("\n");
    }

}