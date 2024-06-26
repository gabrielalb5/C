#include <stdio.h>
int main(){

    int opcao;
    float saldo=3500, limite=10000;
    float deposito, retirada;

    printf("CAIXA ELETRONICO\n");
    printf("1. Retirada de dinheiro\n");
    printf("2. Deposito de dinheiro\n");
    printf("3. Verificacao de saldo\n");
    printf("0. Para sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&opcao);

    do{
        switch (opcao){
            case 1:{
                printf("\nQuanto deseja retirar? R$");
                scanf("%f",&retirada);
                if(retirada>saldo){
                    do{
                        printf("\nSaldo insuficiente! Digite outro valor.\n");
                        printf("Quanto deseja retirar? R$");
                        scanf("%f",&retirada);
                    }while(retirada>saldo);
                }else if(retirada<=0){
                    do{
                        printf("\nDigite um valor maior que R$0\n");
                        printf("Quanto deseja retirar? R$");
                        scanf("%f",&retirada);
                    }while(retirada<=0);
                }else{
                    saldo -= retirada;
                    printf("\nSaque realizado com sucesso!\n");
                }
                break;
            }case 2:{
                printf("\nQuanto deseja depositar? R$");
                scanf("%f",&deposito);
                if((deposito+saldo)>limite){
                    do{
                        printf("\nLimite insuficiente! Deposite um valor menor.\n");
                        printf("Quanto deseja depositar? R$");
                        scanf("%f",&deposito);
                    }while((deposito+saldo)>limite);
                }else if(deposito<=0){
                    do{
                        printf("\nDigite um valor maior que R$0\n");
                        printf("Quanto deseja depositar? R$");
                        scanf("%f",&deposito);
                    }while(deposito<=0);
                }else{
                    saldo += deposito;
                    printf("\nDeposito realizado com sucesso!\n");
                }
                break;
            }case 3:{
                printf("\nSaldo atual R$%.2f\n",saldo);
                printf("Limite R$%.2f\n", limite);
                break;
            }
            default:{
                if(opcao!=0){
                    printf("\nOpcao invalida.\n");
                    break;
                }
            }
        }
        printf("\nCAIXA ELETRONICO\n");
        printf("1. Retirada de dinheiro\n");
        printf("2. Deposito de dinheiro\n");
        printf("3. Verificacao de saldo\n");
        printf("0. Para sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d",&opcao);
    }while(opcao!=0);

    printf("\nAtendimento finalizado.");
    return 0;
}