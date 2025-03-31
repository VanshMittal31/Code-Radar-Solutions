#include <stdio.h>

void reverse(int arr[],int x,int y){
    for (int i=x,j=y;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = arr[i];
    }
    return;

}


int main ()
{
    int n ;
    scanf ("%d",&n); //size of array

    int arr[n];
    for (int i=0;i<=n-1;i++){
        scanf ("%d\n",&arr[i]);
    }

    int k;
    scanf("%d",&k);


    k = k%n;
    reverse (arr,0,n-1);
    reverse (arr,0,k-1);
    reverse (arr,k,n-1);

    for  (int i=0;i<=n-1;i++) printf("%d",arr[i]);


    return 0;
}