// #include <stdio.h>
// int main ()
// {
//     int a;
//     int b =1;
//     scanf("%d",&a);
//     for (int i=1;i<=0;i++){
        
//         for (int j=1;j<=i;j++){
//             int d = 64+j;
//             char  cch = (char)d;
//             printf ("%c",cch);
//             // b++;

//         }
//         printf("\n");

//     }
//     return 0;
// }



#include <stdio.h>
int main()
{
    int a;
    // printf("enter a number: ");
    scanf("%d",&a);
    
    for (int i=1;i<=a;i++){
        int n = 1;
        for(int j=1;j<=i;j++){
            int d = n+64;
            char ch = (char)d;
            printf("%c ",ch);
            n = n+1;
        }
        printf("\n");
    }

    return 0;
} 
