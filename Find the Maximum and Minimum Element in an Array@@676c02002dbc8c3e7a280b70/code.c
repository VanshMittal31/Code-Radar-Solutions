#include <stdio.h>



int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<=n-1;i++) scanf("%d",&arr[i]);

    int max = arr[0];
    int min = arr[0];
    for (int i=0;i<=n-1;i++){
        if (max<=arr[i]) max = arr[i];
        if (min>=arr[i]) min = arr[i];

    }
    printf("%d %d",min,max);




    return 0;
}