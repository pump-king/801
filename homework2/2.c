#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("��J���B");
    scanf("%d",&x);
    y = x/1000;
    printf("%d ��1000��\n",y);
    z = x-y*1000;
    y = z/500;
    printf("%d ��500��\n",y);
    z -= y*500;
    y = z/100;
    printf("%d ��100��\n",y);
    z -= y*100;
    y = z/50;
    printf("%d ��50��\n",y);
    z -= y*50;
    y = z/10;
    printf("%d ��10��\n",y);
    z -= y*10;
    y = z/5;
    printf("%d ��5��\n",y);
    z -= y*5;
    printf("%d ��1��\n",z);


    }




