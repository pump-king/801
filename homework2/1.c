#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, s2, s3, s4, s5, s6;

    printf("Enter 6 numbers: ");
    scanf("%d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6);
    printf("---------------------\n");


    int ar1[3][2]={s1, s2, s3, s4, s5, s6};
    for(int i = 0;i<2;i++){
        for(int k = 0;k<3;k++){
            printf("%d ",ar1[i][k]);
        }
        printf("\n");
    }
    printf("\n----------------------\n");
    int ar2[2][3]={s1, s2, s3, s4, s5, s6};
    for(int k = 0;k<3;k++){
        for(int i = 0;i<2;i++){
            printf("%d ",ar1[i][k]);
        }
        printf("\n");
    }

}

