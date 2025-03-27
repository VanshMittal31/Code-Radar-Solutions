# include <stdio.h>
int main (){
    int  a,b;
    // b =1;
    scanf("%d",&a);
    for (int i=a;i<=a*10;i=i+a){
        // b = b*i;
        printf("%d x %d = %d\n",a,i,i);
    }
    return 0;
}