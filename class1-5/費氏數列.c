#include <stdio.h>
#include <stdlib.h>

int fib(int ind){
    if(ind == 0 || ind == 1){
        return 1;
    }
    return fib(ind-1)+fib(ind-2);
}

int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    int arr[a];
    b = fib(a);
    printf("%d",b);
}
