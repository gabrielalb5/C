/*Faça um programa em Linguagem C para controlar o cadastro e consulta aos livros de
uma livraria online. Cada livro possui: código, título, primeiro autor, editora, ano de publicação e
preço. Elabore um menu com as opções de Cadastro de livro, Consulta do livro por código ou
título, Consulta de livros com preço inferior ao informado pelo usuário, Consultar o número de
livros cadastrados de um autor escolhido pelo usuário, Relatório de livros (mostrar todos os livros
cadastrados) e Sair do programa.
Observação: O programa poderá armazenar até 50 livros.
Atenção: utilize o conceito de registro (struct) e funções para refinar, organizar e otimizar seu
código.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIVROS 50

typedef struct{
    int codigo;
    char titulo[255];
    char autor[255];
    char editora[255];
    int ano;
    float preco;
}Livro;

void cadastro(Livro livros[], int qtdLivros);
void consulta_codigo(Livro livros[], int qtdLivros);
void consulta_titulo(Livro livros[], int qtdLivros);
void consulta_preco(Livro livros[], int qtdLivros);
void consulta_qtd(Livro livros[], int qtdLivros);
void consulta_acervo(Livro livros[], int qtdLivros);

int main(){
    int opcao, qtdLivros=0;
    Livro livros[MAX_LIVROS];

    do{
        printf("\nMENU");
        printf("\n1. Cadastro de livro");
        printf("\n2. Consulta do livro por código");
        printf("\n3. Consulta do livro por título");
        printf("\n4. Consulta de livros com preço inferior ao informado");
        printf("\n5. Consulta de quantidade de livros por autor");
        printf("\n6. Consulta de acervo");
        printf("\n7. Sair do programa");
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao);
    
        switch(opcao){
            case 1: cadastro(livros,qtdLivros);
                    qtdLivros++;
                    break;
            case 2: consulta_codigo(livros,qtdLivros);
                    break;
            case 3: consulta_titulo(livros,qtdLivros);
                    break;
            case 4: consulta_preco(livros,qtdLivros);
                    break;
            case 5: consulta_qtd(livros,qtdLivros);
                    break;
            case 6: consulta_acervo(livros,qtdLivros);
                    break;
            case 7: printf("\nFim do programa.\n");
                    break;
            default:
                    printf("\nOpção inválida! Tente novamente.\n");
                    break;
        }
    }while(opcao!=7);

    return 0;
}

void cadastro(Livro livros[], int qtdLivros){
    if(qtdLivros>=MAX_LIVROS){
        printf("Limite de livros cadastrados atingido!");
        return;
    }

    Livro livro;
    printf("\nCADASTRO DE LIVROS\n");
    livro.codigo = qtdLivros+1;
    printf("Livro ID %d\n",livro.codigo);
    printf("Título: ");
    scanf(" %[^\n]s",livro.titulo);
    printf("Autor: ");
    scanf(" %[^\n]s",livro.autor);
    printf("Editora: ");
    scanf(" %[^\n]s",livro.editora);
    printf("Ano de publicação: ");
    scanf(" %d",&livro.ano);
    printf("Preço: R$");
    scanf(" %f",&livro.preco);
    
    livros[qtdLivros] = livro;

    printf("\nLivro cadastrado com sucesso!\n");
}
void consulta_codigo(Livro livros[], int qtdLivros){
    int codigo, cont=0;
    printf("\nCONSULTA DE LIVRO\nDigite o código: ");
    scanf(" %d",&codigo);
    for(int i=0;i<qtdLivros;i++){
        if(livros[i].codigo==codigo){
            printf("ID: %d | %s (%s - %d), Editora: %s - R$%.2f\n",livros[i].codigo,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].editora,livros[i].preco);
            cont++;
        }
    }
    if(cont==0){
        printf("\nNenhum resultado encontrado\n");
    }
}
void consulta_titulo(Livro livros[], int qtdLivros){
    char titulo[255];
    int cont=0;
    printf("\nCONSULTA DE LIVRO\nDigite o título: ");
    scanf(" %[^\n]s",titulo);
    for(int i=0;i<qtdLivros;i++){
        if(strstr(livros[i].titulo,titulo) != NULL){
            printf("ID: %d | %s (%s - %d), Editora: %s - R$%.2f\n",livros[i].codigo,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].editora,livros[i].preco);
            cont++;
        }
    }
    if(cont==0){
        printf("\nNenhum resultado encontrado\n");
    }
}
void consulta_preco(Livro livros[], int qtdLivros){
    float preco;
    int cont;
    printf("\nCONSULTA DE LIVRO\nDigite um valor limite (somente livros mais baratos serão exibidos): R$");
    scanf(" %f",&preco);
    for(int i=0;i<qtdLivros;i++){
        if(livros[i].preco<preco){
            printf("ID: %d | %s (%s - %d), Editora: %s - R$%.2f\n",livros[i].codigo,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].editora,livros[i].preco);
            cont++;
        }
    }
    if(cont==0){
        printf("\nNenhum resultado encontrado\n");
    }
}
void consulta_qtd(Livro livros[], int qtdLivros){
    char autor[255];
    int cont=0;
    printf("\nCONSULTA DE LIVRO\nDigite o nome do autor: ");
    scanf(" %[^\n]s",autor);
    for(int i=0;i<qtdLivros;i++){
        if(strstr(livros[i].autor,autor) != NULL){
            printf("ID: %d | %s (%s - %d), Editora: %s - R$%.2f\n",livros[i].codigo,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].editora,livros[i].preco);
            cont++;
        }
    }
    printf("\nO autor pesquisado tem %d livros cadastrados\n",cont);
}
void consulta_acervo(Livro livros[], int qtdLivros){
    int cont=0;
    printf("\nTODOS OS LIVROS CADASTRADOS\n");
    for(int i=0;i<qtdLivros;i++){
        printf("ID: %d | %s (%s - %d), Editora: %s - R$%.2f\n",livros[i].codigo,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].editora,livros[i].preco);
        cont++;
    }
    if(cont==0){
        printf("\nNenhum resultado encontrado\n");
    }
}