# include <stdio.h>
int main (){
    int  a;
    scanf("%d",&a);
    for (int i=1;i<=a*10;i=i+a){
        printf("%d x %d = %d",a,i,i);
    }
}