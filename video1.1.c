#include <stdio.h>

int main(){
    int count = 0;
    while(count < 10){
        printf("%d\n", count);
        count ++;
    }

    for (int count = 0; count < 10; count ++){
        printf("%d\n", count);
        if(count < 3){
            printf("small\n");
        }else if(count > 7){
            printf("big\n");
        }else{
            printf("medium\n");
        }
    }

    return 0;
}