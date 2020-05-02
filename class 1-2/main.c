#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
   /*
    switch(x){
    case 0:
        printf("1");
        break;
    case(2):
        printf("2");
        break;
    }*/
    x = x>10?100:200;
    printf("%d",x);
}
