#include <stdio.h>
int main (){
    int a,i,j,k,sp;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++) printf(" ");
        k=i;
        for(j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
      
     
        printf("\n");
    }

}