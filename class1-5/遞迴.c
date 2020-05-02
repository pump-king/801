#include <stdio.h>
#include <stdlib.h>

int fac(int n){
    if(n<=1){
        return 1;
    }
    return n*fac(n-1);
}

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b = 1;
    for(int i=1;i<=a;i++){
        b *= i;
    }
//    int s = fac(a);
    printf("%d",b);
}
