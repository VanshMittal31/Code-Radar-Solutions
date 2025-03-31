#include <stdio.h>
int main (){
    int a,i,j,k,sp;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++) printf(" ");
        // k=2*i-1;
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
      
     
        printf("\n");
    }

}