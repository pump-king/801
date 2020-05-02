#include <stdio.h>
#include <stdlib.h>
/*
int sum(int n1,int n2){
    int a = n1+ n2;
    return a;

}
int avg(int n1,int n2){
    int a = (n1+ n2)/2;
    return a;
}
*/
void swap(int *n1,int *n2){
    int t = *n1;
    *n1 = *n2;
    *n2 = t;
}
int main()
{
    int n1 = 1, n2 = 5;
    swap(&n1,&n2);
    printf("%d %d",n1,n2);
    /*
    printf("%d\n",sum(1,2));
    printf("%d\n",avg(2,4));

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            sum += arr[i][k];
        }
    }
    printf("%d\n",sum);

    int sum=0;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    printf("%d\n",sum);
    system("pause");
    return 0;*/
}

