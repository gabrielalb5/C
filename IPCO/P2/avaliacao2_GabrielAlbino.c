#include <stdio.h>
#include <stdlib.h>
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
void buscaCPF(Agenda agenda);
Agenda adicionarPessoa(Pessoa pessoa, Agenda agenda);
void listarPessoas(Agenda agenda);
void buscaNome(Agenda agenda, char pesquisa[255]);
Agenda removerPessoa(Agenda agenda, char pesquisa[255]);

int main(){
    Pessoa pessoa;
    Agenda agenda;
    agenda.qtd_pessoas = 0;
    int cpf, opcao;
    char nome[255], naturalidade[255], pesquisa[255];

    printf("Bem-vindo à sua agenda pessoal!\n\n");

    do{
        printf("MENU");
        printf("\n1 - Adicionar pessoa");
        printf("\n2 - Buscar pelo CPF");
        printf("\n3 - Listar pessoas");
        printf("\n4 - Buscar pelo nome");
        printf("\n5 - Remover cadastro");
        printf("\n0 - Sair");
        printf("\n\nDigite uma opção: ");
        scanf(" %d",&opcao);

        switch(opcao){
            case 0: printf("\nSaindo...");
                    break;
            case 1: if(agenda.qtd_pessoas>=MAX){
                        printf("\nLimite atingido!\n");
                    }else{
                        printf("\nADICIONAR PESSOA\n");
                        printf("Digite o cpf: ");
                        scanf(" %d",&cpf);
                        printf("Digite o nome: ");
                        scanf(" %[^\n]s",nome);
                        printf("Digite a naturalidade: ");
                        scanf(" %[^\n]s",naturalidade);
                        pessoa = criarPessoa(cpf,nome,naturalidade);
                        agenda = adicionarPessoa(pessoa, agenda);
                    }
                    break;
            case 2: buscaCPF(agenda);
                    break;
            case 3: listarPessoas(agenda);
                    break;
            case 4: printf("\nBUSCA POR NOME\n");
                    printf("Digite o nome: ");
                    scanf(" %[^\n]s",pesquisa);
                    buscaNome(agenda, pesquisa);
                    break;
            case 5: printf("\nREMOVER CADASTRO\n");
                    printf("Digite o nome exato do cadastro que deseja remover: ");
                    scanf(" %[^\n]s",pesquisa);
                    agenda = removerPessoa(agenda, pesquisa);
                    break;
            default: printf("\nOpção inválida\n");
                     break;
        }

        printf("\n");
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

void buscaCPF(Agenda agenda){
    int pesquisa, encontrou = 0;
    Pessoa pessoa;
    printf("\nBUSCA POR CPF\n");
    printf("Digite o CPF: ");
    scanf(" %d",&pesquisa);
    for(int i=0;i<agenda.qtd_pessoas;i++){
        if(agenda.pessoas[i].cpf == pesquisa){
            pessoa = agenda.pessoas[i];
            encontrou = 1;
        }
    }
    if(encontrou){
        printf("\n");
        exibirPessoa(pessoa);    
    }else{
        printf("\nCPF não cadastrado!\n");
    }
}

Agenda adicionarPessoa(Pessoa pessoa, Agenda agenda) {
    for (int i=0;i<agenda.qtd_pessoas;i++) {
        if (agenda.pessoas[i].cpf == pessoa.cpf) {
            printf("\nCPF já cadastrado!\n");
            return agenda;
        }
    }
    agenda.pessoas[agenda.qtd_pessoas] = pessoa;
    agenda.qtd_pessoas++;
    return agenda;
}

void listarPessoas(Agenda agenda){
    if(agenda.qtd_pessoas<=0){
        printf("\nNenhuma pessoa cadastrada na agenda!\n");
    }else{
        printf("\nAGENDA ");
        if(agenda.qtd_pessoas==1){
            printf("(%d cadastro)\n\n",agenda.qtd_pessoas);
        }else{
            printf("(%d cadastros)\n\n",agenda.qtd_pessoas);
        }
        for(int i=0;i<agenda.qtd_pessoas;i++){
            exibirPessoa(agenda.pessoas[i]);
            printf("\n");
        }
    }
}

void buscaNome(Agenda agenda, char pesquisa[255]){
    int encontrou = 0;
    Pessoa pessoa;
    for(int i=0;i<agenda.qtd_pessoas;i++){
        if(strstr(agenda.pessoas[i].nome,pesquisa) != NULL){
            pessoa = agenda.pessoas[i];
            printf("\n");
            exibirPessoa(pessoa);
            encontrou = 1;
        }
    }
    if(!encontrou){
        printf("\n-1 (Nome não encontrado!)\n");  
    }
}

Agenda removerPessoa(Agenda agenda, char pesquisa[255]){
    int posicao=-1;
    for(int i=0;i<agenda.qtd_pessoas;i++){
        if(strcmp(agenda.pessoas[i].nome,pesquisa) == 0){
            posicao = i;
            break;
        }
    }

    if(posicao==-1){
        printf("\nNome não encontrado!\n");
    }else{
        for(int i=posicao;i<agenda.qtd_pessoas-1;i++){
        agenda.pessoas[i] = agenda.pessoas[i+1];
        }
        agenda.qtd_pessoas--;
        printf("\nRemoção de %s realizada com sucesso\n",pesquisa);
    }
    return agenda;
}