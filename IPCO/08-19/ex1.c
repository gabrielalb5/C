/*Exercício 1. Faça um programa em C que gerencia as contas de clientes em um Banco fictício. Cada
conta deverá conter o Número da conta, Nome do cliente e Saldo. Elabore um menu com as
opções de Cadastramento da conta, Depósito, Saque, Consulta e Sair do programa.
Observações:
• Não será permitido cadastramento de contas com o mesmo número, o saque de
valores superiores ao saldo e depósitos com valor negativo.
• A consulta pode ser realizada pelo número da conta ou pelo nome do cliente.
• Um cliente pode possuir mais de uma conta.
• Considere que o banco tem no máximo 10 contas.
Atenção: utilize o conceito de registro (struct) e funções para refinar, organizar e otimizar seu
código.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTA 10

//armazenar os dados de uma conta
typedef struct{
    int numero; //número da conta
    char nome[30]; //define o campo nome
    float saldo; //saldo da conta
} Conta; // Define o nome do tipo criado

void cadastrarConta(Conta contas[], int qteContas);
void deposito(Conta contas[], int qteContas);
void saque(Conta contas[], int qteContas);
void consulta(Conta contas[], int qteContas);

int main(){
    int opcao, qteContas=0;
    Conta contas[MAX_CONTA];
    do{
        printf("\nMENU");
        printf("\n1. Cadastrar conta");
        printf("\n2. Depositar");
        printf("\n3. Sacar");
        printf("\n4. Consultar saldo");
        printf("\n5. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao);
        if(opcao == 1){
            if(qteContas < MAX_CONTA){
                cadastrarConta(contas,qteContas);
                qteContas++;
            }else{
                printf("\nLimite de contas atingido");
            }
        }
        if(opcao == 2) deposito(contas,qteContas);
        if(opcao == 3) saque(contas,qteContas);
        if(opcao == 4) consulta(contas,qteContas);
    }while(opcao != 5);

   return 0;
}

void cadastrarConta(Conta contas[], int qteContas){
    Conta c;
    printf("\nCADASTRO DE CONTA");
    printf("\nNúmero da conta: ");
    scanf("%d",&c.numero);
    for(int i=0;i<qteContas;i++){
        if(contas[i].numero==c.numero){
            printf("\nERRO: Número da conta já cadastrado!\n");
            return;
        }
    }
    printf("Nome: ");
    scanf("%s",c.nome);
    printf("Saldo: R$");
    scanf("%f",&c.saldo);
    contas[qteContas] = c;
    printf("\nConta cadastrada com sucesso!\n");
}
void deposito(Conta contas[], int qteContas){
    float deposito;
    int num_conta, pos=-1;
    printf("\nDEPÓSITO");
    printf("\nDigite o número da sua conta: ");
    scanf("%d",&num_conta);
    for(int i=0;i<qteContas;i++){
        if(contas[i].numero==num_conta){
          pos = i;  
        }
    }
    if(pos==-1){
        printf("ERRO: Conta não encontrada\n");
        return;
    }
    printf("Quanto deseja depositar? R$");
    scanf("%f",&deposito);
    if(deposito>0){
        contas[pos].saldo += deposito;
    }else{
        do{
            printf("\nVocê digitou um valor negativo. Tente novamente!\nQuanto deseja depositar? R$");
            scanf("%f",&deposito);
        }while(deposito<=0);
    }
    printf("Depósito de R$%.2f realizado com sucesso!\n",deposito);
}
void saque(Conta contas[], int qteContas){
    float valor_saque;
    int num_conta, pos=-1;
    printf("\nSAQUE");
    printf("\nDigite o número da sua conta: ");
    scanf("%d",&num_conta);
    for(int i=0;i<qteContas;i++){
        if(contas[i].numero==num_conta){
          pos = i;  
        }
    }
    if(pos==-1){
        printf("ERRO: Conta não encontrada\n");
        return;
    }
    if(contas[pos].saldo == 0){
        printf("ERRO: Seu saldo é de R$%.2f\n",contas[pos].saldo);
        return;
    }
    do {
        printf("Saldo de R$%.2f. Quanto deseja sacar? R$",contas[pos].saldo);
        scanf("%f", &valor_saque);
        if (valor_saque <= 0) {
            printf("ERRO: O valor do saque deve ser positivo!\n");
        }else if (valor_saque > contas[pos].saldo) {
            printf("ERRO: Valor do saque maior que o saldo. Tente novamente!\n");
        }
    } while (valor_saque <= 0 || valor_saque > contas[pos].saldo);
    contas[pos].saldo -= valor_saque;
    printf("Saque de R$%.2f realizado com sucesso!\n",valor_saque);
}
void consulta(Conta contas[], int qteContas){
    int opcao, num_conta;
    char nome[30];
    do{
        printf("\nCONSULTA");
        printf("\n1. Pelo número da conta");
        printf("\n2. Pelo nome");
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao);
        if(opcao!=1 && opcao!=2){
            printf("\nOpção inválida.");
        }
    }while(opcao!=1 && opcao!=2);
    if(opcao==1){
        printf("\nQual o número da conta? ");
        scanf("%d",&num_conta);
        for(int i=0;i<qteContas;i++){
            if(contas[i].numero==num_conta){
                printf("Seu saldo é de R$%.2f\n",contas[i].saldo);
            }
        }
    }else if(opcao==2){
        printf("\nQual o seu nome? ");
        scanf("%s",nome);
        printf("Saldo das suas contas\n");
        for(int i=0;i<qteContas;i++){
            if(strcmp(contas[i].nome, nome) == 0){
                printf("R$%.2f\n",contas[i].saldo);
            }
        }
    }
}