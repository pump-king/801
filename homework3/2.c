#include <stdio.h>
#include <stdlib.h>

void lock(char *w){
    int k = 1;
    while(w[k] != "\0"){
            w[k] += 1;
            k +=1;
            if(w[k] !="\0"){
                w[k] += 1;
                break;
            }
    }
}

void unLock(char *w){
        int k = 1;
    while(w[k] != "\0"){
            w[k] -= 1;
            k +=1;
            if(w[k] !="\0"){
                w[k] -= 1;
                break;
            }
    }
}

int main()
{
    char w[]="";
   printf("Enter a message start with + or -:");
   scanf("%s",&w);
   if(w[0]== '+'){
    lock(&w);
   }else if(w[0]== '-'){
    unLock(&w);
   }else{
        printf("Wrong message");
   }

   printf("%s",w);
}


