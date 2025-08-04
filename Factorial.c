#include <stdio.h>
int main(){
    int num;
    int prod=1;
    printf("ENTER YOUR NUMBER WHOSE FACTORIAL YOU WANT:\n");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        prod=prod*i;
    
    }
    printf("%d",prod);
    return 0;
}