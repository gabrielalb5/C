#include <stdio.h>
#include <stdlib.h>
#define MAX_CONTA 10

//armazenar os dados de uma conta
typedef struct{
    int numero; //número da conta
    char nome[30]; //define o campo nome
    float saldo; //saldo da conta
} Conta; // Define o nome do tipo criado

Conta cadastrarConta(Conta contas[], int qteContas);
int deposito(Conta contas[], int qteContas);
int saque(Conta contas[], int qteContas);
int consulta(Conta contas[], int qteContas);

int main(){
    int opcao, qteContas=0;
    Conta contas[MAX_CONTA];
    do{
        printf("\nMenu");
        printf("\n1. Cadastrar conta");
        printf("\n2. Depositar");
        printf("\n3. Sacar");
        printf("\n4. Consultar saldo");
        printf("\n5. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao);
        if(opcao == 1){
            if(qteContas <= MAX_CONTA){
                cadastrarConta(contas,qteContas);
                qteContas++;
            }else
                printf("\nLimite de contas atingido");
        }
        if(opcao == 2) deposito(contas,qteContas);
        if(opcao == 3) saque(contas,qteContas);
        if(opcao == 4) consulta(contas,qteContas);
    }while(opcao != 5);

   return 0;
}

Conta cadastrarConta(Conta contas[], int qteContas){
    Conta c;
    printf("\n\nFunção cadastrar conta");
    printf("\nNúmero da conta: ");
    scanf("%d",&c.numero);
    for(int i=0;i<qteContas;i++){
        if(contas[i].numero==c.numero){
            printf("\nNúmero da conta já cadastrado!\n");
            return;
        }
    }
    printf("\nNome: ");
    scanf("%s",c.nome);
    printf("\nSaldo: R$");
    scanf("%f",&c.saldo);
    contas[qteContas] = c;
    printf("\nConta cadastrada com sucesso!\n");
}
int deposito(Conta contas[], int qteContas){
    printf("função deposito");
}
int saque(Conta contas[], int qteContas){
    printf("função saque");
}
int consulta(Conta contas[], int qteContas){
    printf("função consulta");
}