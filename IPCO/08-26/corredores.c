#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct{
    int num_peito;
    char nome[255];
    int idade;
    int sexo;
    float tempo;
}Corredor;

void cadastrar(Corredor corredores[], int qtd_corredores);
void consultar_num_peito(Corredor corredores[], int qtd_corredores);
void consultar_nome(Corredor corredores[], int qtd_corredores);
void classificacao(Corredor corredores[], int qtd_corredores);
void media_geral(Corredor corredores[], int qtd_corredores);
void media_60(Corredor corredores[], int qtd_corredores);
void mulheres(Corredor corredores[], int qtd_corredores);

int main(){
    int opcao, qtd_corredores=0;
    Corredor corredores[MAX];

    do{
        printf("\nMENU\n");
        printf("1) Cadastrar corredor(a)\n");
        printf("2) Consultar os dados de corredor(a) pelo número do peito\n");
        printf("3) Consultar os dados do corredor(a) pelo nome\n");
        printf("4) Gerar relatório de classificação\n");
        printf("5) Calcular a média do tempo de prova entre todos os corredores e corredoras\n");
        printf("6) Apresentar a quantidade de corredores(as) acima dos 60 anos e a média do tempo de prova deles(as)\n");
        printf("7) Apresentar a quantidade de mulheres e a média de idade delas\n");
        printf("8) Sair\n");
        printf("\nEcolha uma opção: ");
        scanf("%d",&opcao);

        switch (opcao){
            case 1: cadastrar(corredores,qtd_corredores);
                    qtd_corredores++;
                    break;
            case 2: consultar_num_peito(corredores,qtd_corredores);
                    break;
            case 3: consultar_nome(corredores,qtd_corredores);
                    break;
            case 4: classificacao(corredores,qtd_corredores);
                    break;
            case 5: media_geral(corredores,qtd_corredores);
                    break;
            case 6: media_60(corredores,qtd_corredores);
                    break;
            case 7: mulheres(corredores,qtd_corredores);
                    break;
            case 8: printf("Saindo do programa.");
                    break;
            default: printf("Opção inválida.\n");
                    break;
        }
    }while(opcao!=8);
}

void cadastrar(Corredor corredores[], int qtd_corredores){
    printf("\nCADASTRAR CORREDOR(A)\n");
    if(qtd_corredores>=MAX){
        printf("Limite de corredores(as) atingido!\n");
        return;
    }
    
    Corredor corredor;
    printf("Número de peito %d\n",qtd_corredores);
    corredor.num_peito = qtd_corredores;

    printf("Digite o nome: ");
    scanf(" %[^\n]s",corredor.nome);

    printf("Digite a idade: ");
    scanf("%d",&corredor.idade);
    while(corredor.idade <= 0){
        printf("\nIdade inválida. Redigite: ");
        scanf("%d",&corredor.idade);
    }

    printf("0 - Feminino\n1 - Masculino\nDigite seu sexo: ");
    scanf("%d",&corredor.sexo);
    while(corredor.sexo!=0 && corredor.sexo!=1){
        printf("\nOpção inválida.\n");
        printf("0 - Feminino\n1 - Masculino\nDigite seu sexo: ");
        scanf("%d",&corredor.sexo);
    }

    printf("Digite o tempo de prova em minutos: ");
    scanf("%f",&corredor.tempo);
    while(corredor.tempo <= 0){
        printf("\nTempo de prova inválido. Redigite: ");
        scanf("%f",&corredor.tempo);
    }

    corredores[qtd_corredores] = corredor;
    if(corredor.sexo == 1){
        printf("Corredor cadastrado com sucesso!\n");    
    }else{
        printf("Corredora cadastrada com sucesso!\n");
    }
}
void consultar_num_peito(Corredor corredores[], int qtd_corredores){
    int num_peito;
    printf("\nCONSULTA POR NÚMERO DE PEITO\n");

    if(qtd_corredores==0){
        printf("Não há corredores cadastrados!\n");
        return;
    }

    printf("Digite o número de peito: ");
    scanf("%d",&num_peito);
    for(int i=0;i<qtd_corredores;i++){
        if(corredores[i].num_peito==num_peito){
            printf("ID %d | %s, %d anos",corredores[i].num_peito, corredores[i].nome,corredores[i].idade);
            if(corredores[i].sexo==1){
                printf(" (M) ");
            }else{
                printf(" (F) ");
            }
            printf("- Tempo: %.2f min\n",corredores[i].tempo);
        }
    }
}
void consultar_nome(Corredor corredores[], int qtd_corredores){
    char nome[255];
    printf("\nCONSULTA POR NOME\n");

    if(qtd_corredores==0){
        printf("Não há corredores cadastrados!\n");
        return;
    }

    printf("Digite o nome: ");
    scanf(" %[^\n]s",nome);
    for(int i=0;i<qtd_corredores;i++){
        if(strstr(corredores[i].nome,nome) != NULL){
            printf("ID %d | %s, %d anos",corredores[i].num_peito, corredores[i].nome,corredores[i].idade);
            if(corredores[i].sexo==1){
                printf(" (M) ");
            }else{
                printf(" (F) ");
            }
            printf("- Tempo: %.2f min\n",corredores[i].tempo);
        }
    }
}
void classificacao(Corredor corredores[], int qtd_corredores){
    printf("\nCLASSIFICAÇÃO\n");

    if (qtd_corredores == 0) {
        printf("Não há corredores cadastrados!\n");
        return;
    }

    for (int i = 0; i < qtd_corredores - 1; i++) {
        for (int j = i + 1; j < qtd_corredores; j++) {
            if (corredores[j].tempo < corredores[i].tempo) {
                Corredor temp = corredores[i];
                corredores[i] = corredores[j];
                corredores[j] = temp;
            }
        }
    }

    for (int i = 0; i < qtd_corredores; i++) {
        printf("%d° lugar - ", i + 1);
        printf("ID %d | %s, %d anos", corredores[i].num_peito, corredores[i].nome, corredores[i].idade);
        if (corredores[i].sexo == 1) {
            printf(" (M) ");
        } else {
            printf(" (F) ");
        }
        printf("- Tempo: %.2f min\n", corredores[i].tempo);
    }
}
void media_geral(Corredor corredores[], int qtd_corredores){
    float soma=0;
    printf("\nMÉDIA DE TEMPO DE TODOS OS CORREDORES\n");

    if(qtd_corredores==0){
        printf("Não há corredores cadastrados!\n");
        return;
    }
    for(int i=0;i<qtd_corredores;i++){
        printf("ID %d | %s, %d anos",corredores[i].num_peito, corredores[i].nome,corredores[i].idade);
            if(corredores[i].sexo==1){
                printf(" (M) ");
            }else{
                printf(" (F) ");
            }
        printf("- Tempo: %.2f min\n",corredores[i].tempo);
        soma += corredores[i].tempo;
    }
    printf("\nMédia de tempo geral: %.2f min\n",soma/qtd_corredores);
}
void media_60(Corredor corredores[], int qtd_corredores){
    float soma=0;
    int cont=0;
    printf("\nCORREDORES ACIMA DE 60 ANOS\n");

    if(qtd_corredores==0){
        printf("Não há corredores cadastrados!\n");
        return;
    }
    for(int i=0;i<qtd_corredores;i++){
        if(corredores[i].idade>60){
            printf("ID %d | %s, %d anos",corredores[i].num_peito, corredores[i].nome,corredores[i].idade);
            if(corredores[i].sexo==1){
                printf(" (M) ");
            }else{
                printf(" (F) ");
            }
            printf("- Tempo: %.2f min\n",corredores[i].tempo);
            soma += corredores[i].tempo;
            cont++;
        }
    }
    if(cont>0){
        printf("\nQuantidade de corredores com mais de 60 anos: %d\n",cont);
        printf("Média de tempo: %.2f min\n",soma/cont);
    }else{
        printf("\nNão há corredores com mais de 60 anos.\n");
    }
    
}
void mulheres(Corredor corredores[], int qtd_corredores){
    float soma=0;
    int cont=0, idades=0;
    printf("\nCORREDORAS (SEXO FEMININO)\n");

    if(qtd_corredores==0){
        printf("Não há corredores cadastrados!\n");
        return;
    }
    for(int i=0;i<qtd_corredores;i++){
        if(corredores[i].sexo==0){
            printf("ID %d | %s, %d anos (F) - Tempo: %.2f min\n",corredores[i].num_peito, corredores[i].nome,corredores[i].idade,corredores[i].tempo);
            soma += corredores[i].tempo;
            idades += corredores[i].idade;
            cont++;
        }
    }
    if(cont>0){
        printf("\nQuantidade de corredoras: %d\n",cont);
        printf("Média de idade: %.2f\n",idades/cont);
        printf("Média de tempo: %.2f min\n",soma/cont);
    }else{
        printf("\nNão há mulheres cadastradas.\n");
    }
}