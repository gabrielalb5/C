//programa exemplo do uso de while
#include <stdio.h>

int main(){
    int i;
    i = 1;
    while(i!=0){
        printf("%d ",i);
        printf("Digite o novo valor de i: ");
        scanf("%d",&i);
    }
    return 0;
}