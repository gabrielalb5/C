#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct{
    int cpf;
    char nome[255];
    char naturalidade[255];
}Pessoa;

typedef struct{
    int qtd_pessoas;
    Pessoa pessoas[MAX];
}Agenda;

Pessoa criarPessoa(int cpf, char nome[255], char naturalidade[255]);
void exibirPessoa(Pessoa p);
void adicionarPessoa(Pessoa pessoa, Agenda agenda);
void listarPessoas(Agenda agenda);

int main(){
    Pessoa pessoa;
    Agenda agenda;
    agenda.qtd_pessoas = 0;
    int cpf;
    char nome[255];
    char naturalidade[255];
    int opcao;

    do{
        printf("\nMENU");
        printf("\n1 - Adicionar pessoa");
        printf("\n2 - Exibir pessoa");
        printf("\n3 - Listar pessoas");
        printf("\n0 - Sair");
        printf("\n\nDigite uma opção: ");
        scanf("%d",&opcao);

        switch(opcao){
            case 0: printf("\nSaindo...");
                    break;
            case 1: printf("\nADICIONAR PESSOA\n");
                    printf("Digite o cpf: ");
                    scanf("%d",&cpf);
                    printf("Digite o nome: ");
                    scanf(" %[^\n]s",nome);
                    printf("Digite a naturalidade: ");
                    scanf(" %[^\n]s",naturalidade);
                    pessoa = criarPessoa(cpf,nome,naturalidade);
                    adicionarPessoa(pessoa, agenda);
                    break;
            case 2: printf("\nEXIBIR PESSOA\n");
                    exibirPessoa(pessoa);
                    break;
            case 3: printf("\nLISTA DE PESSOAS\n");
                    listarPessoas(agenda);
                    break;
            default: printf("\nOpção inválida\n");
                     break;
        }
    }while(opcao!=0);

    return 0;
}

Pessoa criarPessoa(int cpf, char nome[255], char naturalidade[255]){
    Pessoa p;
    p.cpf = cpf;
    strcpy(p.nome, nome);
    strcpy(p.naturalidade, naturalidade);
    return p;
}

void exibirPessoa(Pessoa p) {
	printf("CPF: %d\nNome: %s\nNaturalidade: %s\n", p.cpf, p.nome, p.naturalidade);   
}

void adicionarPessoa(Pessoa pessoa, Agenda agenda){
    if(agenda.qtd_pessoas>=MAX){
        printf("Limite atingido!");
    }else{
        if(agenda.qtd_pessoas == 0){
            agenda.pessoas[0] = pessoa;
        }else{
            for(int i=0;i<=agenda.qtd_pessoas;i++){
                if(agenda.pessoas[i].cpf == pessoa.cpf){
                    printf("Pessoa já cadastrada");
                }else{
                    agenda.pessoas[i] = pessoa;
                    agenda.qtd_pessoas++;
                }
            }
        }
        
    }
}

void listarPessoas(Agenda agenda){
    for(int i=0;i<=agenda.qtd_pessoas;i++){
        exibirPessoa(agenda.pessoas[i]);
    }
}