#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("輸入金額");
    scanf("%d",&x);
    y = x/1000;
    printf("%d 個1000元\n",y);
    z = x-y*1000;
    y = z/500;
    printf("%d 個500元\n",y);
    z -= y*500;
    y = z/100;
    printf("%d 個100元\n",y);
    z -= y*100;
    y = z/50;
    printf("%d 個50元\n",y);
    z -= y*50;
    y = z/10;
    printf("%d 個10元\n",y);
    z -= y*10;
    y = z/5;
    printf("%d 個5元\n",y);
    z -= y*5;
    printf("%d 個1元\n",z);


    }




