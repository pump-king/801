#include <stdio.h>
#include <stdlib.h>

void add(int *arr){
    for(int i=0 ;i<3;i++){
       *(arr[0]+i) += 10;
    }
}
int main()
{
    int arr[2][3]={{1,2,3},
                   {4,5,6}};
    add(&arr);
    for(int i=0 ;i<2;i++){
            for(int k=0 ;k<3;k++){
        printf("%d ",arr[i][k]);
    }
    /*
    int arr[]={10,20,30};
    int sum = 0;
    int *ptr = &arr[0];
    for(int x=0; x<3; x++){g
        sum +=*ptr;
        ptr++;
    }
    printf("%d",sum);
    */

}

