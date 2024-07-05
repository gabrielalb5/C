#include <stdio.h>
int main(){

    //Entrada
    int m, n, i, soma;

    printf("Digite o valor de M: ");
    scanf("%d",&m);
    printf("Digite o valor de N: ");
    scanf("%d",&n);

    //Processamento
    while(m>0 && n>0){
        soma=0;
        if(m>n){
            printf("M maior que N: "); //Saída
            for(i=0;n<=m;i++){
                printf("%d ",n); //Saída
                soma += n;
                n++;
            }
            printf("\nSoma: %d",soma);
        }else{
            printf("N maior que M: "); //Saída
            for(i=0;m<=n;i++){
                printf("%d ",m); //Saída
                soma += m;
                m++;
            }
            printf("\nSoma: %d",soma); //Saída
        }
        printf("\n\nDigite o valor de M: ");
        scanf("%d",&m);
        printf("Digite o valor de N: ");
        scanf("%d",&n);
    }

    return 0;
}