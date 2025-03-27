#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int b =1;
    for (int i=a;i<=a*10;i=i+a){
        
        printf("%d x %d = %d \n",a,b,i);
        b++;
    }
    return 0;
}