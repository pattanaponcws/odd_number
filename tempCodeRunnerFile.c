#include<stdio.h>

int main() {

    int num[4],i;
    printf("Put four number : ");
    for(i=0;i<4;i++){
        scanf("%d",&num[i]);
            if(num[i]%2==0){
                printf("%d is odd number\n",num[i]);
            }
    }
    return 0;
}
