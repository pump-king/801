#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,k;
    k = 1;
   printf("請輸入一個數");
    scanf("%d",&n);
    for(x=0;x<n;x++){
            for(i=0;i<k;i++){
                printf("%c",'*');
            }
            k=k+1;
            printf("\n");
    }
    n = n-1;
    k = k-1;
    for(x=0;x<n;x++){
        for(i=1;i<k;i++){
            printf("%c",'*');
        }
        k = k-1;
        printf("\n");
    }
}
